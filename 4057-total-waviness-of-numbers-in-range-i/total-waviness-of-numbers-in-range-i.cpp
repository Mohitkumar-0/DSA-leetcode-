class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i=num1;i<=num2;i++){
            string num = to_string(i);
            for(int j=1;j<num.length()-1;j++){
                bool peak = num[j] > num[j - 1] && num[j] > num[j + 1];
                bool wave = num[j] < num[j - 1] && num[j] < num[j + 1];
                if(peak || wave){
                    ans++;
                }
            }
        }
        return ans;
    }
};