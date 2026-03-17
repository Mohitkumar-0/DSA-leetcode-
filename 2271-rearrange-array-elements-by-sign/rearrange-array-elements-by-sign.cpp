class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        int k = 0;
        while(k < nums.size()){
            if(k % 2 == 0){
                nums[k] = pos[i];
                i++;
                k++;
            }
            else{
                nums[k] = neg[j];
                j++;
                k++;
            }
        }
        return nums;
    }
};