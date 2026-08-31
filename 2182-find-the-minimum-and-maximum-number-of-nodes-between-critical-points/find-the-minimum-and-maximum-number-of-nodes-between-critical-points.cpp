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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr(2,-1);
        int a = INT_MAX;
        int b = INT_MIN;
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* front = temp->next;
        int cnt = 1;
        int curr = -1;
        int first = -1;
        int previ = -1;
        while(temp->next!=NULL){
            if(prev == NULL){
                prev = temp;
                temp = temp->next;
                front = temp->next;
                cnt++;
                continue;
            }
            if(prev->val>temp->val && front->val>temp->val){
                if(first == -1){
                    first = cnt;
                    previ = cnt;
                    curr = cnt;
                    prev = temp;
                    temp = temp->next;
                    front = temp->next;
                    cnt++;
                    continue;
                }
                else{
                    previ = curr;
                    curr = cnt;
                }
                a = min(a,curr-previ);
            }
            else if(prev->val<temp->val && front->val<temp->val){
                if(first == -1){
                    first = cnt;
                    previ = cnt;
                    curr = cnt;
                    prev = temp;
                    temp = temp->next;
                    front = temp->next;
                    cnt++;
                    continue;
                }
                else{
                    previ = curr;
                    curr = cnt;
                }
                a = min(a,curr-previ);
            }
            prev = temp;
            temp = temp->next;
            front = temp->next;
            cnt++;
        }
        b = curr-first;
        if(a==INT_MAX || b == -1) return {-1,-1};
        arr[0] = a;
        arr[1] = b;
        return arr;
    }
};