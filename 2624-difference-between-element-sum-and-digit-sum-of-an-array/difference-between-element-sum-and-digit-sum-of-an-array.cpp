class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum = 0;
        int digisum = 0;
        for(int i = 0; i<nums.size(); i++){
            elesum = elesum + nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            while(temp > 0){
                int rem = temp % 10;
                digisum = digisum + rem;
                temp = temp / 10;
            }
        }
        return abs(elesum - digisum);
    }
};