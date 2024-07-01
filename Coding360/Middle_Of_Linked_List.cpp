/*
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
*/
int lengthofLL(Node *head){
    int len=0;
    Node *temp=head;

    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    // Write your code here
    if(head==nullptr || head->next==nullptr) return head;

    int count=lengthofLL(head)/2 +1;
    int counter=0;
    Node *temp=head;

    while(temp){
        counter++;
        if(counter==count) return temp;

        temp=temp->next;
    }
    return head;

}

