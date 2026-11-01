class Solution {
public:
    int pivotIndex(vector<int>& nums) {
              vector <int> prefix;
              int n=nums.size()-1;
              prefix.push_back(nums[0]);
              for(int i=1;i<nums.size();i++){
                prefix.push_back(prefix[i-1]+nums[i]);
              }
              vector <int> suffix;
              suffix.push_back(nums[n]);
              int j=0;
              for(int i=n-1;i>=0;i--){
                suffix.push_back(suffix[j]+nums[i]);
                j++;
              }
              reverse(suffix.begin(),suffix.end());
              for(int i=0;i<=n;i++){
                if(prefix[i]==suffix[i]) return i;
              }
              return -1;
            
        }
    
};