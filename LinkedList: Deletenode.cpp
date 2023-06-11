#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) 
{
    // Write your code here.
   
    LinkedListNode<int>* temp2=node->next;

    swap(temp2->data,node->data);

    node->next=temp2->next;
    delete temp2;

}
