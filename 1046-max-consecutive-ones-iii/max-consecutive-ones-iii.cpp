class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int maxsize=0;
         int p1=0;
         int freq=0;
         for(int p2=0;p2<nums.size();p2++){
              if(nums[p2]==0){
                  freq++;
              }
              while(freq>k){
                if(nums[p1]==0) freq--;
                p1++;
                
              }
              maxsize=max(maxsize,p2-p1+1);
         }
         return maxsize;
    }
};