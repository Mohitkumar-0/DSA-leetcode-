class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.length() == 1) return false;
        int ud = 0;
        int lr = 0;
        for(int i = 0;i<moves.length();i++){
            if(moves.at(i) == 'L'){
                lr++;
            }
            else if(moves.at(i) == 'R'){
                lr--;
            }
            else if(moves.at(i) == 'U'){
                ud++;
            }
            else{
                ud--;
            }
        }
        if(lr == 0 && ud == 0){
            return true;
        }
        else{
            return false;
        }
    }
};