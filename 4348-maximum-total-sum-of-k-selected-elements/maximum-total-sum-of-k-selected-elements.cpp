class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        long long sum = 0;
        int cnt = 0;
        while(cnt<k && mul != 0){
            sum += 1LL* nums[n] * mul;
            mul -=1;
            cnt++;
            n -= 1;
        }
        if(cnt<k){
            while(cnt<k){
                sum+=nums[n];
                n-=1;
                cnt++;
            }
        }
        return sum;
    }
};