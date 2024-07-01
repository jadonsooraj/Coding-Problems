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

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node *back=nullptr;
    Node *temp=head;

    while(temp){
        Node *front=temp->next;
        temp->next=back;
        back=temp;
        temp=front;
    }
    return back;
}
