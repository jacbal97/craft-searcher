#include "items.cpp"
#include "Datas.h"
#include <iostream>

int main()
{
	std::string a;
	std::getline(std::cin,a);
	search(&head, a).print();
	
	return 1;
}
