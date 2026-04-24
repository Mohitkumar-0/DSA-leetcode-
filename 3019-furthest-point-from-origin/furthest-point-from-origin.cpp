class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntl = 0;
        int cntr = 0;
        int cnt_ = 0;
        for(int i = 0;i<moves.length();i++){
            if(moves.at(i) == 'L'){
                cntl += 1;
            }
            else if(moves.at(i) == 'R'){
                cntr += 1;
            }
            else{
                cnt_ += 1;
            }
        }
        return abs(cntl - cntr) + cnt_;
    }
};