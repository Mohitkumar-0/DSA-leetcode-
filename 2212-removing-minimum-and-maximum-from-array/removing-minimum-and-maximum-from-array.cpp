class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int imin = 0;
        int imax = 0;
        int maxi = nums[0];
        int mini = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                imax = i;
            }
            if(nums[i]<mini){
                mini = nums[i];
                imin = i;
            }
        }
        if(imin>imax) swap(imin,imax);
        int front = imax+1;
        int back = nums.size()-imin;
        int both = (imin+1)+(nums.size()-imax);
        return min({front,back,both});
    }
};