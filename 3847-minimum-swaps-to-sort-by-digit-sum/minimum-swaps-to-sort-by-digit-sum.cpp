class Solution {
public:
    int DS(int num){
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum+=digit;
            num = num/10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int>sorted(nums);
        auto lambda = [&](int num1, int num2){
            int num1DS = DS(num1);
            int num2DS = DS(num2);
            if(num1DS != num2DS){
                return num1DS<num2DS;
            }
            return num1<num2;
        };

        sort(sorted.begin(),sorted.end(),lambda);

        unordered_map<int,int> mpp;
        for(int i= 0;i<n;i++){
            mpp[nums[i]] = i;
        }
        int swap = 0;

        for(int i=0;i<n;i++){
            int exp = sorted[i];
            int curr = nums[i];
            if(exp == curr) continue;

            int idx = mpp[exp];
            nums[i] = exp;
            nums[idx] = curr;

            mpp[exp] = i;
            mpp[curr] = idx;

            swap++;
        }
        return swap;
    }
};