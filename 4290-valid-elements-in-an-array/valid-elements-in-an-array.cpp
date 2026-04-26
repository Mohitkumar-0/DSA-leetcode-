class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        res.push_back(nums[0]);
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i] > *max_element(nums.begin(),nums.begin()+i)){
                res.push_back(nums[i]);
            }
            else if(nums[i] > *max_element(nums.begin()+i+1,nums.end())){
                res.push_back(nums[i]);
            }
        }
        if(nums.size() > 1){
            res.push_back(nums[n-1]);
        }
        return res;
    }
};