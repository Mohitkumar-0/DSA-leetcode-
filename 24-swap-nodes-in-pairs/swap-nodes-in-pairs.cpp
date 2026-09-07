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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp = head;
        ListNode* front = temp->next;
        ListNode* ch = NULL;
        ListNode* prev = NULL;
        head = front;
        while(temp!=NULL && temp->next!=NULL) {
            front = temp->next;
            ch = front->next;

            front->next = temp;
            temp->next = ch;

            if(prev!=NULL){
                prev->next = front;
            }
            prev = temp;
            temp = ch;
        }
        return head;
    }
};