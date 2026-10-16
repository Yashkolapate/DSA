class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int maxcnt=0;
         map <char,int> m;
         int p1=0;
         for(int p2=0;p2<s.size();p2++){
            while(m[s[p2]]>0){
                m[s[p1]]--;
                p1++;
            }
             m[s[p2]]++;
             maxcnt=max(maxcnt,p2-p1+1);
         }
              return maxcnt;
    }
};