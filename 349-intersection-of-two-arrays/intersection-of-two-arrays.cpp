class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> res;
        for(int i = 0; i < nums2.size(); i++){
            int x = nums2[i];
            if(s.count(x)){
                res.insert(x);
            }
        }
        return vector<int> (res.begin(),res.end());
    }
};