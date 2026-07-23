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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        int cnt = 1;
        stack<int>st;
        while(temp!=NULL){
            if(cnt>=left && cnt<= right){
                st.push(temp->val);
                temp=temp->next;
            }
            else{
                temp=temp->next;
            }
            
            cnt++;
        }
        temp = head;
        cnt = 1;
        while(temp!=NULL){
            if(cnt>=left && cnt<=right){
                temp->val = st.top();
                st.pop();
                temp = temp->next;
            }
            else{
                temp = temp->next;
            }
            cnt++;
        }
        return head;
    }
};