class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> triplets;
        for(int j=0;j<nums.size()-1;j++){
             if(j>0 && nums[j]==nums[j-1]) continue;

            int p1=j+1;
            int p2=nums.size()-1;

            while(p1<p2){
                 int sum=nums[j]+nums[p1]+nums[p2];
                if(sum==0){
                       triplets.push_back({nums[j],nums[p1],nums[p2]});
                       p2--;
                       p1++;
                       while(p1<p2 && nums[p1]==nums[p1-1]){
                            p1++;
                       }
                        while(p1<p2 && nums[p2]==nums[p2+1]){
                            p2--;
                       }
                }
                else if(sum>0){
                     p2--;
                }
                else{
                    p1++;
                }
            }
        
        }
        return triplets;
    }
};