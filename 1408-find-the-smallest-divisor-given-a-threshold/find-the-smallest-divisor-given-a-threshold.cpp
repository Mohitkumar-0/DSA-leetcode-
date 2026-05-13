class Solution {
public:
    bool possible(vector<int>& nums, int d,int threshold){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            double temp = nums[i];
            double num = ceil(double (temp/d));
            sum += num;
        }
        if(sum<= threshold){
            return true;
        }
        else{
            return false;
        }
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = *max_element(nums.begin(),nums.end());
        int low = 1;
        int high = ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(nums,mid,threshold)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};