#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.

    if(!first) return second;
    if(!second) return first;

    

    Node<int>* head;

    if(first->data<second->data)
    {
        head=first;
        first=first->next;
    }

    else
    {

        head=second;
        second=second->next;
    }

    Node<int>*ret=head;

    while(first&&second)
    {
        if(first->data<second->data)
        {
            head->next=first;
            first=first->next;
        }

        else
        {
            head->next=second;
            second=second->next;
        }

        head=head->next;
    }

    if(first)

    {
        head->next=first;
           
    }

    if(second)

    {
        head->next=second;
           
    }

    return ret;



}
