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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* start = head;
        int sum = 0;
        while(temp!= NULL){
            while(temp->val !=0){
                sum+=temp->val;
                temp=temp->next;
            }
            temp = temp->next;
            start->val = sum;
            sum = 0;
            start->next = temp;
            start = temp;
        }
        return head;
    }
};