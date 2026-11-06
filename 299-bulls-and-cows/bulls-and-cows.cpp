class Solution {
public:
    string getHint(string secret, string guess) {
        int cows=0;
        int bulls=0;
        for(int k=0;k<secret.size();k++){
            if(secret[k]==guess[k]){
                    bulls++;
                    secret[k]='B';
                    guess[k]='A';
                }
        }
        for(int i=0;i<guess.size();i++){
            for(int j=0;j<secret.size();j++){
                if((secret[i]==guess[j]) && i!=j){
                    cows++;
                    guess[j]='C';
                    break;
                }
            }
        }
        
        return to_string(bulls)+'A'+to_string(cows)+'B';
    }
    
};