class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            vector<bool>visited(101,0);
            int count = 0;
            for(int j = i;j<nums.size();j++){
                if(!visited[nums[j]]){
                    visited[nums[j]]=1;
                    count++;
                }
                sum += count*count;
            }
        }
        return sum;
    }
};