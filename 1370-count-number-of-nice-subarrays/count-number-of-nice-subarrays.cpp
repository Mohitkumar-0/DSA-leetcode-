class Solution {
public:
    int helper(vector<int>&nums,int k){
        if(k<0) return 0;
        int l =0;
        int r=0;
        int sum=0;
        int cnt=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt = cnt +(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2!=0){
                nums[i]=1;
            }
            else{
                nums[i]=0;
            }
        }
        int x = helper(nums,k);
        int y = helper(nums,k-1);
        return x-y;
    }
};