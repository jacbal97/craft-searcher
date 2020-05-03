#include "items.cpp"
#include "Datas.h"
#include <iostream>

int main()
{
	std::string a;
	std::getline(std::cin,a);
	search(&head, a).print();
	//red_inner_backpack.print();
	//std::cout << std::endl;
	//neon_decoction.print();


	return 1;
}