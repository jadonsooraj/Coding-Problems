/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here
    if(head==nullptr || head->next==nullptr) return 0;

    Node *slow=head;
    Node *fast=head;
    int len=0;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            fast=fast->next;
            len++;
            while(fast!=slow){
                len++;
                fast=fast->next;
            }
            return len;
        }
    }
    return 0;
}
