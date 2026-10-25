class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector <bool> gre;
            int maxi=INT_MIN;
            for(int i=0;i<candies.size();i++){
                maxi=max(maxi,candies[i]);
            }
            for(int j=0;j<candies.size();j++){
                if(candies[j]+extraCandies >= maxi){
                   gre.push_back(true);
                }
                else{
                    gre.push_back(false);
                }
            }
            return gre;
            
    }
};