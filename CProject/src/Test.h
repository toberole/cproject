#pragma once

#include <iostream>
#include <mutex>

// 互斥量
std::mutex mtx;

void c(int &count) {
	while (count < 100)
	{
		mtx.lock();
		std::cout << "c count = " << count++ << std::endl;
		mtx.unlock();
	}
}

void p(int &count) {
	while (count < 100)
	{
		mtx.lock();
		std::cout << "p count = " << count++ << std::endl;
		mtx.unlock();
	}
}


