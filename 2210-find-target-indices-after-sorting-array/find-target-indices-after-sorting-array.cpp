class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ls;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == target){
                ls.push_back(i);
            }
            else if(nums[i]> target){
                break;
            }
        }
        return ls;
    }
};