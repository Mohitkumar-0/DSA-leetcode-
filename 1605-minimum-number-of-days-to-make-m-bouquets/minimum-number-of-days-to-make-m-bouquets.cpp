class Solution {
public:
    bool possible(vector<int>&bloomDay,int d, int m, int k){
        int count = 0;
        int num = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i] <= d){
                count++;
            }
            else{
                num += (count/k);
                count = 0;
            }
        }
        num += (count/k);
        if(num >= m){
            return true;
        }
        else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int ans = *max_element(bloomDay.begin(),bloomDay.end());
        long long req = 1LL * m * k;
        if(n < req) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k) == true){
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