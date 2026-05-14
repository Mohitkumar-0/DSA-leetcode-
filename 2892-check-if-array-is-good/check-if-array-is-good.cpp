class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int hash[201] = {0};
        int maxi = *max_element(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i = 1;i<maxi;i++){
            if(hash[i] > 1 || hash[i] == 0){
                return false;
            }
        }
        return hash[maxi] == 2;
    }
};