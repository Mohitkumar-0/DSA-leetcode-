class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop_back();
            }
            else if(operations[i]=="D"){
                st.push_back(2*st.back());
            }
            else if(operations[i]=="+"){
                int n = st.size();
                st.push_back(st[n-1]+st[n-2]);
            }
            else{
                st.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i=0;i<st.size();i++){
            sum+=st[i];
        }
        return sum;
    }
};