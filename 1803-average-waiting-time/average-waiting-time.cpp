class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long finish = 0;
        long long wait = 0;
        for(int i = 0;i<customers.size();i++){
            int arr = customers[i][0];
            int prep = customers[i][1];
            finish = max(finish,(long long)arr) + prep;
            wait += finish - arr;
        }
        return (double)wait/customers.size();
    }
};