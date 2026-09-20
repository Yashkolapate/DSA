class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxValue = 0;

        for(int i = 0; i < s.length(); i++) {
            vector<char> letters;
            int count = 0;

            for(int j = i; j < s.length(); j++) {

                if(find(letters.begin(), letters.end(), s[j]) != letters.end()) {
                    break;
                }

                letters.push_back(s[j]);
                count++;
            }

            maxValue = max(maxValue, count);
        }

        return maxValue;
    }
};