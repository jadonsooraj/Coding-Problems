/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
int lengthofLL(ListNode *head){
    int len=0;
    ListNode *temp=head;

    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
}
public:
    ListNode* middleNode(ListNode* head) {
        
        //edge case
        if(head==nullptr || head->next==nullptr) return head;
        int len=lengthofLL(head);

        int count=len/2 +1;
        int counter=0;

        ListNode* temp=head;

        while(temp){
            counter++;
            if(counter==count) return temp;

            temp=temp->next;
        }
        return head;
    }
};