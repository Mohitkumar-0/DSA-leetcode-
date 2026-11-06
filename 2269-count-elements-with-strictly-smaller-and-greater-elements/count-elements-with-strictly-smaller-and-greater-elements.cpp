class Solution {
public:
    int countElements(vector<int>& nums) {
        int x = *min_element(nums.begin(),nums.end());
        int y = *max_element(nums.begin(),nums.end());
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>x && nums[i]<y){
                count++;
            }
        }
        return count;
    }
};