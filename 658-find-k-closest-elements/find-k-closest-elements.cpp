class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int low = 0;
        int high = arr.size()-1;
        if(arr[low]>x){
            for(int i =0;i<k;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        else if(arr[high]<x){
            for(int i = arr.size()-k;i<arr.size();i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        else{
            while(low<=high){
                int mid = (low+high)/2;
                if(arr[mid]==x){
                    int m = mid-1;
                    int n = mid+1;
                    int cnt = 1;
                    ans.push_back(arr[mid]);
                    while((m>=0 || n<arr.size()) && cnt < k){
                        if(m<0){
                            ans.push_back(arr[n]);
                            n++;
                            cnt++;
                            continue;
                        }
                        if(n==arr.size()){
                            ans.push_back(arr[m]);
                            m--;
                            cnt++;
                            continue;
                        }
                        if(abs(arr[m]-x) < abs(arr[n]-x)){
                            ans.push_back(arr[m]);
                            m--;
                            cnt++;
                        }
                        else if(abs(arr[m]-x) > abs(arr[n]-x)){
                            ans.push_back(arr[n]);
                            n++;
                            cnt++;
                        }
                        else{
                            if(arr[m]<arr[n]){
                                ans.push_back(arr[m]);
                                m--;
                                cnt++;
                            }
                            else{
                                ans.push_back(arr[n]);
                                n++;
                                cnt++;
                            }
                        }
                    }
                    sort(ans.begin(),ans.end());
                    return ans;
                }
                else if(arr[mid]>x){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            int m = high;
            int n = low;
            int cnt = 0;
            while((m>=0 || n<arr.size()) && cnt < k){
                if(m<0){
                    ans.push_back(arr[n]);
                    n++;
                    cnt++;
                    continue;
                }
                if(n==arr.size()){
                    ans.push_back(arr[m]);
                    m--;
                    cnt++;
                    continue;
                }
                if(abs(arr[m]-x) < abs(arr[n]-x)){
                    ans.push_back(arr[m]);
                    m--;
                    cnt++;
                }
                else if(abs(arr[m]-x) > abs(arr[n]-x)){
                    ans.push_back(arr[n]);
                    n++;
                    cnt++;
                }
                else{
                    if(arr[m]<arr[n]){
                        ans.push_back(arr[m]);
                        m--;
                        cnt++;
                    }
                    else{
                        ans.push_back(arr[n]);
                        n++;
                        cnt++;
                    }
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
        }
        return ans;
    }
};