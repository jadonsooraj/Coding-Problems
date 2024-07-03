// brute force using array
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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode *temp=head;

        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int i=arr.size()-1;

        temp=head;
        while(temp && i>=0){
            if(temp->val!=arr[i]) return false;

            i--;
            temp=temp->next;
        }
        return true;
    }
};

//M-2 without using extra space using Tortoisehare algo
class Solution {
private:
ListNode* reverseLL(ListNode *head){
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
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *newhead= reverseLL(slow->next);
        ListNode *first=head;
        ListNode *second=newhead;

        while(second){
            if(first->val != second->val){
                reverseLL(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newhead);
        return true;
    }
};