class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max_inc=1;
        int max_dec=1;
        int p1=0;
        int p2=1;
        while(p2<nums.size()){
            if(nums[p2]>nums[p2-1]){
                p2++;
            }
            else if(nums[p2]<=nums[p2-1]){
                p1=p2;
                p2++;
            }
            max_inc=max(max_inc,p2-p1);
        }

           p1=0;
           p2=1;
           while(p2<nums.size()){
            if(nums[p2]<nums[p2-1]){
                p2++;
            }
            else if(nums[p2]>=nums[p2-1]){
                p1=p2;
                p2++;
            }
            max_dec=max(max_dec,p2-p1);
        }
          return max(max_inc,max_dec);
    }
};