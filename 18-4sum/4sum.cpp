class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
         vector<vector<int>>v;
         if(nums.size()<4){
            return v;
         }
         for(int i=0;i<nums.size()-3;){
            for(int j=i+1;j<nums.size()-2;){
            long long sum=1LL * nums[i]+nums[j];
            int p1=j+1;
            int p2=nums.size()-1;
            while(p1<p2){
                long long sum_1=1LL * nums[p1]+nums[p2];
                if(sum_1 == target-sum){
                    v.push_back({nums[i],nums[j],nums[p1],nums[p2]});
                    while(nums[p1+1]==nums[p1] && p1+1<p2){
                        p1++;
                    }
                    while(nums[p2-1]==nums[p2] && p1<p2-1){
                        p2--;
                    }
                    p1++;
                    p2--;
                }
                else if(sum_1 > target-sum){
                    p2--;
                }
                else{
                    p1++;
                }
            }
              j++;
             while(nums[j]==nums[j-1] && j<nums.size()-2){
                j++;
             }
            }
             i++;
             while(nums[i]==nums[i-1]  && i<nums.size()-3){
                i++;
             }
            
         }
           return v;
    }
};