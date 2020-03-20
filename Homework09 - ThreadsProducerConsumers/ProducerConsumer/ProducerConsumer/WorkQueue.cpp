#include "WorkQueue.h"

WorkQueue::WorkQueue()
{}

void WorkQueue::push(int n)
{
	std::lock_guard<std::mutex> guard(mtx);
	jobs.push_back(n);
}

int WorkQueue::pop()
{
	while (true){

		//critical section ( where we hold a lock )
		mtx.lock();
		if (jobs.size() == 0) {
			mtx.unlock();
			//critical section end
			std::this_thread::yield();
		}
		else {
			int r = jobs.front();
			jobs.pop_front();
			mtx.unlock();
			//critical section end
			return r;
		}
	}
}

int WorkQueue::size()
{
	std::lock_guard<std::mutex> guard(mtx);
	return jobs.size();
}
