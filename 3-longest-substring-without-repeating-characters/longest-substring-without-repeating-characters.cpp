class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <char> letters={0};
        vector <int> counter={0};
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(find(letters.begin(),letters.end(),s[j])!=letters.end()){
                       counter.push_back(count);
                       count=0;
                       letters.clear();
                       break;
                }
                else{
                    letters.push_back(s[j]);
                    count++;
                }
            }
               counter.push_back(count);
               count=0;
        }
          
           int maxValue=*max_element(counter.begin(),counter.end());
           return maxValue;
            
    }
};