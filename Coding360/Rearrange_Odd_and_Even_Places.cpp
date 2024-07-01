/****************************************************************
Following is the Linked list node structure already written

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/

Node* oddEvenList(Node* head)
{
	// Write your code here.
    if(head==nullptr || head->next==nullptr) return head;

    Node *odd=head;
    Node *even=head->next;
    Node *evenhead=head->next;

    while(even && even->next){
        odd->next=odd->next->next;
        odd=odd->next;

        even->next=even->next->next;
        even=even->next;

    }
    odd->next=evenhead;
    return head;
    
}