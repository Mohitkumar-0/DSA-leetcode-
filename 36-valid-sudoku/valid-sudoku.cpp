class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string>st;
        for(int i =0;i<9;i++){
            for(int j = 0;j<9;j++){
                char c = board[i][j];
                if(c!='.'){
                    string row = string(1,c) + "at row" + to_string(i);
                    string col = string(1,c) + "at col" + to_string(j);
                    string box = string(1,c) + "at box" + to_string(i/3) + "-" + to_string(j/3);
                    if(st.find(row)!=st.end()){
                        return false;
                    }
                    st.insert(row);
                    if(st.find(col) != st.end()){
                        return false;
                    }
                    st.insert(col);
                    if(st.find(box)!= st.end()){
                        return false;
                    }
                    st.insert(box);
                }
            }
        }
        return true;
    }
};