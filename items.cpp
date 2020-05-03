#include "items.h"
#include <iostream>

void item::print()
{
	if(name != "nazwa")
	{
		//std::cout << "Co jest potrzebne" << std::endl;
		if(a == nullptr)
			std::cout << name << std::endl;
		else
		{
			this->a->print();
			if(b == nullptr)
				std::cout << name << std::endl;
			else
			{
				this->b->print();
				if (c == nullptr)
					std::cout << name << std::endl;
				else
				{
					this->c->print();
					if (d == nullptr)
						std::cout << name << std::endl;
					else
					{
						this->d->print();
						if(e == nullptr)
							std::cout << name << std::endl;
						else
							this->e->print();
					}	
				}	
			}	
		}
	}
}


item::item() {}
item::item(std::string nazwa,item* next, item* item1, item* item2, item* item3, item* item4, item* item5)
{
    name = nazwa;
	n = next;
    a = item1;
    b = item2;
    c = item3;
    d = item4;
    e = item5;
}

item search(item *head, std::string nazwa)
{
	item *temp = head;
	if(temp != nullptr)
	{
		while(temp->name != nazwa)
		{
			if(temp->n == nullptr)
			{
				std::cout << "item doesnt exist" << std::endl;
				return *head;
			}
			else
			{
				temp = temp->n;
			}
		}
	}
	return *temp;
}