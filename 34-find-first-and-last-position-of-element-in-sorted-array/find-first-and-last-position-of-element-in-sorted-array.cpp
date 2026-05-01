class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        int temp = -1;
        int temp2 = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<= high){
            int mid = (low+high) / 2;
            if(nums[mid] == target){
                high = mid-1;
                temp = mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        res[0] = temp;
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = (low + high) /2;
            if(nums[mid] == target){
                temp2 = mid;
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        res[1] = temp2;
        return res;
    }
};