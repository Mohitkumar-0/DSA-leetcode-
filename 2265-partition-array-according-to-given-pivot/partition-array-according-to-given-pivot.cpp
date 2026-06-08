class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res;
        vector<int> low;
        vector<int> eq;
        vector<int> high;
        int i = 0;
        while(i<nums.size()){
            if(nums[i] < pivot){
                low.push_back(nums[i]);
                i++;
            }
            else if(nums[i]>pivot){
                high.push_back(nums[i]);
                i++;
            }
            else{
                eq.push_back(nums[i]);
                i++;
            }
        }
        for(int i = 0;i<low.size();i++){
            res.push_back(low[i]);
        }
        for(int i = 0;i<eq.size();i++){
            res.push_back(eq[i]);
        }
        for(int i=0;i<high.size();i++){
            res.push_back(high[i]);
        }
        return res;
    }
};