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
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *back= new ListNode();
        ListNode *temp=head;
        while(temp){
            ListNode *front=temp->next;
            temp->next=back->next;
            back->next=temp;
            temp=front;
        }
        return back->next;
    }
};