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

//m-1 Brutr force using 2 pass solution
class Solution {
private:
int lengthofLL(ListNode *head){
    ListNode *temp=head;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
}

ListNode* deletenode(ListNode *head, int k){
    int counter=0;
    ListNode *temp=head;
    ListNode *previous=nullptr;
    while(temp){
            if(counter==k){
                previous->next=previous->next->next;
                delete temp;
                break;
            }
            counter++;
            previous=temp;
            temp=temp->next;
        }
        return head;
}
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        int len=lengthofLL(head);
        int count=len/2;

        head=deletenode(head,count);
        return head;
        
    }
};

//m-2 using tortoisehare algo
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        //edgecase
        if(head==nullptr || head->next==nullptr) return nullptr;

        ListNode *slow=head;
        ListNode *fast=head;
        //move fast 1 step ahead of slow
        fast=head->next->next;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *temp=slow->next;
        slow->next=slow->next->next;
        delete temp;
        return head;
    }
};