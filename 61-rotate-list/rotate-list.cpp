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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return 0;
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            temp= temp->next;
            len++;
        }
        if(k%len == 0) return head;
        k=k%len;
        temp = head;
        int x = abs(len-k);
        int i =0;
        while(i<x-1){
            temp=temp->next;
            i++;
        }
        ListNode* front = temp->next;
        temp->next = NULL;
        ListNode* end = front;
        while(end->next!=NULL){
            end = end->next;
        }
        end->next = head;
        return front;
    }
};