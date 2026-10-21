class Solution {
public:
    bool checksubstring(int l, int r, string str){
               while(l<=r){
                  if(str[l]==str[r]){
                       l++;
                       r--;
                  }
                  else{
                    return false;
                  }
               }
               return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
           
            else{
                return checksubstring(l+1,r,s)||checksubstring(l,r-1,s);
                //  if(checksubstring(l+1,r,s)){
                //     count++;
                //     l++;
                //  }
                //  else if(checksubstring(l,r--,s)){
                //     count++;
                //     r--;
                //  }
                //  else{
                //     return false;
                //  }
            }
        }
        
        return true;
    }
};