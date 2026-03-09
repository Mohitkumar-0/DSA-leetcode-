class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int a = nums1.size();
        int b = nums2.size();
        vector<int> res;
        int i = 0;
        int j = 0;
        while(i<a && j<b){
            if(nums1[i]> nums2[j]){
                j++;
            }
            else if(nums1[i]< nums2[j]){
                i++;
            }
            else{
                if(res.empty() || res.back() != nums1[i]){
                    res.push_back(nums1[i]);   
                }
                i++;
                j++;
            }
        }
        return res;
    }
};