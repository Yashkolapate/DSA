class Solution {
public:
    bool isPalindrome(string s) {
        string res=s;
        string str;
        transform(res.begin(),res.end(),res.begin(),::tolower);
        for(int i=0;i<res.length();i++ ){
            if((res[i]>=48 && res[i]<=57)||(res[i]>=97 && res[i]<=122)){
                str.push_back(res[i]);
            }
        }
          string ans=str;
          reverse(str.begin(),str.end());
          return ans==str;
    }
};