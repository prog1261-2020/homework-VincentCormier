//NAME: Vincent Cormier
//Added sections from in class 
//learning from Dr. Burchill
//In other words - the better way
//DATE: 2020-03-13
//Today we test the boundries of locks and threads

#include <iostream>
#include <thread>
#include "WorkQueue.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <atomic>
#include <mutex>
#include <chrono>

WorkQueue jobs;
std::mutex cout_mtx;

std::atomic<bool> working(false);
std::atomic<bool> quit(false);
std::atomic<int> produced{ 0 };
std::atomic<int> consumed{ 0 };


void producer() {
	std::cout << "P-in" << std::endl;
	while (true) {
		if (working) {
			jobs.push(rand() % 100);
			produced++;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}
		else {
			if (quit) {
				std::cout << "P-out" << std::endl;
				return;
			}
			std::this_thread::yield();
		}
	}
}

void consumer(int id) {
	while (true) {
		if (working || jobs.size() > 0) {
			int n = jobs.pop();
			int sz = jobs.size();
			consumed++;
			cout_mtx.lock();
			std::cout << sz << ": " << id << " processed " << n << std::endl;
			cout_mtx.unlock();
		}
		else {
			std::cout << "C-gone" << std::endl;
			if (quit) {
				return;
			}
		}
	}
}

int main() {
	srand(time(0));
	
	std::vector<std::thread> producers;
	std::vector<std::thread> consumers;

	for (int i = 0; i < 3; ++i) {
		producers.push_back(std::thread(producer));
	}

	for (int i = 0; i < 5; ++i) {
		consumers.push_back(std::thread(consumer, i));
	}


	working = true;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	working = false;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	working = true;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	working = false;

	quit = true;

	for (auto& t : producers) {
		t.join();
	}
	std::cout << "Producers done" << std::endl;
	for (auto& t : consumers) {
		t.join();
	}
	std::cout << "Consumers done" << std::endl;

	std::cout << "produced: " << produced << std::endl;
	std::cout << "consumed: " << consumed << std::endl;

}