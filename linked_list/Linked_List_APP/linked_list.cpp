
#include "linked_list.h"
#include "node.h"

using namespace std;
template<class T> Linked_List<T>::Linked_List()
{
    head = new node<T>;
    head->link = nullptr;
}

template<class T> void Linked_List<T>::addnode(T data)
{
    if(head == nullptr)
    {
        current = new node<T>;
        current->data = data;
        current->link = nullptr;
        head->link = current;
    }
    else
    {
        node<T> *newnode = new node<T>;
        newnode->link = nullptr;
        newnode->data = data;
        current->link= newnode;
    }
}

template<class T> void Linked_List<T>::remnode(T data)
{
    if(head->link == nullptr)
        cerr<<"List is empty."<<endl;

    node<T> *current = head->link;
    while(current->link !=nullptr)
    {
        if(data == current->data)
            current->link = current->link->link;
    }




}

template<class T> void Linked_List<T>::printlist()
{


}

