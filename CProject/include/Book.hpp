#pragma once

#include <iostream>

#ifndef BOOK_H
#define BOOK_H

class Book
{
public:
	Book();
	Book(const Book & b);
	~Book();

public:
	int count;
};

Book::Book()
{
	std::cout << "Book 构造函数" << std::endl;
}

Book::Book(const  Book& b) {
	std::cout << "Book 拷贝构造函数" << std::endl;
	count = b.count;
}

Book::~Book()
{
	std::cout << "Book 析构函数" << std::endl;
}

#endif // !BOOK_H
