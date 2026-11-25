class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n==1) return 1;
        int cnt = 1;
        sort(points.begin(),points.end());
        int i = 0;
        int j = 1;
        while(j<n){
            if(points[i][0]<=points[j][0] && points[i][1] >= points[j][0]){
                points[i][1] = min(points[i][1],points[j][1]);
                j++;
                continue;
            }
            else{
                cnt++;
                i=j;
                j++;
            }
        }
        return cnt;
    }
};