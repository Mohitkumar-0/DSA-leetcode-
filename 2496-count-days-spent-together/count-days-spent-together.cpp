class Solution {
public:
    int findDays(string date, vector<int>&cum){
        int month = stoi(date.substr(0,2));
        int days = stoi(date.substr(3));
        return cum[month-1] + days;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthdays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> cum(13,0);

        cum[1] = 31;
        for(int i = 2;i<13;i++){
            cum[i]=cum[i-1]+monthdays[i-1];
        }

        int startAlice = findDays(arriveAlice,cum);
        int endAlice = findDays(leaveAlice,cum);
        int startBob = findDays(arriveBob,cum);
        int endBob = findDays(leaveBob,cum);
        
        int ans = min(endAlice,endBob) - max(startAlice,startBob) + 1;

        return ans<0 ? 0:ans;
    }
};