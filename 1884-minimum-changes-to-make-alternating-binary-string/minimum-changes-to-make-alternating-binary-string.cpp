class Solution {
public:
    int minOperations(string s) {
        string t = s;
        int count1 = 0, count2 = 0;
        int i = 0;

        if(s[0] != '0'){
            s[0] = '0';
            count1++;
        }

        i = 0;
        while(i < s.length()-1){
            if(s[i] == s[i+1]){
                if(s[i] == '0') s[i+1] = '1';
                else s[i+1] = '0';
                count1++;
            }
            i++;
        }

        if(t[0] != '1'){
            t[0] = '1';
            count2++;
        }

        i = 0;
        while(i < t.length()-1){
            if(t[i] == t[i+1]){
                if(t[i] == '0') t[i+1] = '1';
                else t[i+1] = '0';
                count2++;
            }
            i++;
        }

        return min(count1, count2);
    }
};