class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i = 0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int j=1;
        while(k){
            if(st.find(k*j) == st.end()) return k*j;
            else{
                j++;
            }
        }
        return 0;
    }
};