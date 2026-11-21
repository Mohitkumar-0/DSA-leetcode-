class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>ans(n,0);
        int k = 0;
        while(k<2){
            for(int i = nums.size()-1;i>=0;i--){
                while(!st.empty() && st.top()<= nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                }
                else{
                    ans[i]=st.top();
                }
                st.push(nums[i]);
            }
            k++;
        }
        return ans;
    }
};