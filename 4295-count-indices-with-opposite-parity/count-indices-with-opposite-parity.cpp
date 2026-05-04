class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size()-1;
        int cnte = 0;
        int cnto = 0;
        for(int i = n;i>=0;i--){
            if(nums[i] % 2 == 0){
                cnte++;
                nums[i] = cnto;
            }
            else{
                cnto++;
                nums[i] = cnte;
            }
        }
        return nums;
    }
};