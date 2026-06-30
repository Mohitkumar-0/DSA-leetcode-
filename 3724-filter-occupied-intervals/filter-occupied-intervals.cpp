class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        int n = occupiedIntervals.size();
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        vector<vector<int>> merge;
        for(int i = 0;i<n;i++){
            if(merge.empty() || occupiedIntervals[i][0] > merge.back()[1] + 1){
                merge.push_back(occupiedIntervals[i]);
            }
            else{
                merge.back()[1] = max(merge.back()[1],occupiedIntervals[i][1]);
            }
        }
        vector<vector<int>> ans;
        for(int i = 0;i<merge.size();i++){
            if(merge[i][0] > freeEnd || merge[i][1] < freeStart){
                ans.push_back(merge[i]);
            }
            else if(merge[i][0] >= freeStart && merge[i][1] <= freeEnd){
                continue;
            }
            else if(merge[i][0] < freeStart && merge[i][1] > freeEnd){
                ans.push_back({merge[i][0],freeStart - 1});
                ans.push_back({freeEnd + 1,merge[i][1]});
            }
            else if(merge[i][0] < freeStart){
                ans.push_back({merge[i][0],freeStart - 1});
            }
            else{
                ans.push_back({freeEnd + 1 , merge[i][1]});
            }
        }
        return ans;
    }
};