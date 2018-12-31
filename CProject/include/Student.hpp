#pragma once

#include <iostream>
#include "Book.hpp"

#ifdef BOOK_H
#define BOOK_H

class Student {
public:
	Book book;

public:
	Student() {
		std::cout << "Student ���캯��" << std::endl;
	}

	Student(const Student& s) {
		std::cout << "Student �������캯��" << std::endl;
		book = s.book;
	}

	~Student()
	{
		std::cout << "Student ��������" << std::endl;
	}
};

#endif // BOOK_H
