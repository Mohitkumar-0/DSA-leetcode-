class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,0);
        int left[n];
        int right[n];
        int sum = 0;
        int i = 1;
        left[0] = 0;
        right[n-1] = 0;
        while(i<n){
            sum += nums[i-1];
            left[i] = sum;
            i++;
        }
        sum = 0;
        i=n-2;
        while(i>=0){
            sum+=nums[i+1];
            right[i] = sum;
            i--;
        }
        for(int i = 0;i<n;i++){
            res[i] = abs(left[i] - right[i]);
        }
        return res;
    }
};