class Solution {
public:
    bool who_wins(int t_stones,int rem,int turn){
        if(rem==0){
            return false;
        }
        if(t_stones<rem && turn%2==0){
            return true;
        }
        else if(t_stones<rem && turn%2==1){
            return false;
        }
        return who_wins(t_stones-rem,rem-1,turn+1);
        
    }
    bool canAliceWin(int n) {
        bool a= who_wins(n,10,1);
        return a;
    }
};