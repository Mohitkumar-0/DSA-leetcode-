class Solution {
public:
    bool possible(vector<int>& weights, int w, int days){
        int count = 1;
        int add = 0;
        for(int i = 0;i<weights.size();i++){
            add += weights[i];
            if(add>w){
                count++;
                add = 0;
                i = i-1;
            }
        }
        return count <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int low = *max_element(weights.begin(),weights.end());
        for(int i = 0;i<weights.size();i++){
            sum += weights[i];
        }
        int high = sum;
        int ans = sum;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(weights,mid,days)){
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