#include <iostream>
#include <thread>

#include "Util.h"
#include "Student.h"
#include "Book.h"

using namespace std;

struct MyStruct
{

};

void sys() {
	std::cout << "sys thread" << std::endl;
}

void test1() {
	thread th(sys);
	thread th1(sys);

	th.join();
	th1.join();

	Student stu;
	std::cout << stu.book.count << std::endl;

	Student *stu0 = new Student();
	std::cout << stu0->book.count << std::endl;

	delete stu0;
}

void test2() {
	int a = 0;
	std::shared_ptr<int> ptr = std::make_shared<int>(a);
	// std::shared_ptr<int> ptr_a = ptr;
	std::shared_ptr<int> ptr_a(ptr);

	std::cout << ptr_a.use_count() << std::endl;
}

void test3() {
	Student s;
	s.book.count = 11;
	Student &s1 = s;

	std::cout << s1.book.count << std::endl;
}
void test4() {
	MyStruct s;
	std::cout << sizeof(s) << std::endl;
}

int main()
{
	cout << "Hello CMake" << endl;

	// test1();
	// test2();
	// test3();

	test4();
	
	getchar();
	return 0;
}
