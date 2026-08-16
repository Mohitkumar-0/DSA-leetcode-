class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int res = 0;
        int i =0;
        while(i<requests.size()){
            if(i==0) res += requests[i];
            else{
                res += abs(requests[i]-requests[i-1]);
            }
            i++;
        }
        return res;
    }
};