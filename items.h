#ifndef ITEMS_H
#define ITEMS_H

#include <string>

class item
{
public:
    std::string name = "nazwa";
    item* a;
    item* b;
    item* c;
    item* d;
    item* e;
    item* n = nullptr;

    void print();

    item();
    item(std::string nazwa,item* next, item* item1 = nullptr, item* item2  = nullptr, item* item3  = nullptr, item* item4  = nullptr, item* item5  = nullptr);

};

item search(item *head, std::string nazwa);

#endif