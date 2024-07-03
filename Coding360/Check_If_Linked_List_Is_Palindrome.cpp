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
//function to reverse LL
Node* reverseLL(Node *head){
    Node *back= new Node();
    Node *temp=head;
    while(temp){
        Node *front=temp->next;
        temp->next=back->next;
        back->next=temp;
        temp=front;
    }
    return back->next;
}

//optimised solution without using extra array
bool isPalindrome(Node *head)
{
    // write your code here
    Node *slow=head;
    Node *fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *newhead=reverseLL(slow->next);

    Node *first=head;
    Node *second=newhead;

    while(second){
        if(first->data != second->data){
            reverseLL(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverseLL(newhead);
    return true;
}