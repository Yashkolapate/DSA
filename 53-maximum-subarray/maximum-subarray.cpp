class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         vector <int> prefix;
         prefix.push_back(0);
         for(int i=1;i<=nums.size();i++){
            prefix.push_back(prefix[i-1]+nums[i-1]);
         }
         int maxi=INT_MIN;
         int mini=prefix[0];
         if(prefix.size()==2) return prefix[1];
         for(int r=1;r<prefix.size();r++){
                maxi=max(maxi,prefix[r]-mini);
                mini=min(mini,prefix[r]);
         }
         return maxi;
    }
};