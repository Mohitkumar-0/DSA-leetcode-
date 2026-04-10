class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        int maxi = 0;
        int i = 0;
        while(i<arr.size()){
            if(arr[i] % 2 != 0){
                count++;
                i++;
                maxi = max(count , maxi);
            }
            else{
                count = 0;
                i++;
            }
        }
        if(maxi >= 3){
            return true;
        }
        else{
            return false;
        }
    }
};