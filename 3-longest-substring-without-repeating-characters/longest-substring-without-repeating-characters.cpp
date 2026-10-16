class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          vector <int>v(128,0);
          int maxcnt=0;
          int p1=0;
         for(int p2=0;p2<s.size();p2++){
                int ch=s[p2];
                while(v[ch]>0){
                     v[s[p1]]--;
                     p1++;
                   
                }
                v[ch]++;
                maxcnt=max(maxcnt,p2-p1+1);
          } 

          return maxcnt;

    }
};