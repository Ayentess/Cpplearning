#include<iostream>
#include"KCircle.h"

int main()
{
	KCircle c(1.9);

	std::cout << "Area" << c.getArea() << std::endl;
	std::cout << "length" << c.getLeng() << std::endl;

	return 0;
}