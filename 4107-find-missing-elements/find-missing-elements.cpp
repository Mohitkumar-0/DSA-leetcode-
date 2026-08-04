class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[n-1];
        vector<int> hasht(maxi-mini+1,0);
        for(int i=0;i<nums.size();i++){
            hasht[nums[i]-mini]++;
        }
        for(int i = 0;i<hasht.size();i++){
            if(hasht[i]==0){
                ans.push_back(i+mini);
            }
        }
        return ans;
    }
};