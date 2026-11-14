class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        vector<int>PS(n,0);
        PS[0] = nums[0];
        for(int i=1;i<n;i++){
            PS[i] = PS[i-1] + nums[i];
        }
        multiset<int>st;
        st.insert(0);
        int res = INT_MAX;
        for(int j = l-1;j<n;j++){
            if(j-l>=0){
                st.insert(PS[j-l]);
            }

            int outOld = j-r-1;
            if(outOld>=0){
                st.erase(st.find(PS[outOld]));
            }
            else if(outOld == -1){
                st.erase(st.find(0));
            }
            auto it = st.lower_bound(PS[j]);
            if(it != begin(st)){
                it--;
                res = min(res,PS[j] - *it);
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};