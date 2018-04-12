#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "node.h"
template<class T>

class Linked_List
{

public:

    node<T> *head;
    node<T> *current;

    Linked_List();
    virtual ~Linked_List();

    // operations
    void addnode(T data);
    void remnode(T data);
    void printlist();

};

#endif // LINKED_LIST_H
