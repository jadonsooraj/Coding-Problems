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
int lenofLL(ListNode* head){
    ListNode *temp=head;;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
}
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //lengthofLL
        int len=lenofLL(head);

        //edge case
        if(head==nullptr || head->next==nullptr) return nullptr;

        //edgecase
        if(len==n){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }

        ListNode *temp=head;
        int k= len-n;

        while(temp){
            k--;
            if(k==0){
                ListNode* temp1=temp->next;
                temp->next=temp->next->next;
                delete temp1;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};