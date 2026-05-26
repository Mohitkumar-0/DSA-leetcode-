class Solution {
public:
    int numberOfSpecialChars(string word) {
       int count = 0;
       set<char> st;
       for(int i = 0;i<word.length();i++){
        st.insert(word[i]);
       }
       for(auto ch : st){
        if(ch >= 'a' && ch <= 'z'){
            char upper = ch - 'a' + 'A';

        if(st.find(upper) != st.end()){
            count += 1;
        }
       }
       }
       return count;
    }
};