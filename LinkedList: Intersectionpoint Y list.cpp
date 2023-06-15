/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

int findlength(Node *temp)
  {
      int len=0;
      while(temp!=NULL)
      {
          temp=temp->next;
          len++;
      }

      return len;
  }

Node* findIntersection(Node *headA, Node *headB)
{
    //Write your code here

    int lena=findlength(headA);
        int lenb=findlength(headB);

        if(lena<lenb)
        {
            while(lena!=lenb)
            {
                headB=headB->next;
                lenb--;
            }
        }

        else if(lenb<lena)
        {
            while(lena!=lenb)
            {
                headA=headA->next;
                lena--;
            }
        }

        while(headA&&headB)
        {
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }

        return NULL;
}
