#include <iostream>
#include "llist.hpp"
#include "cnode.hpp"

int main() {
    clist myList = new clist;
    cnode node = new cnode("Kunal", "Shrivastav", 18, MALE);

    myList.add(&node)
}