class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=-1;
          if(nums.size()==1){
            return 0;
          }
          else if(nums.size()==2){
                if(nums[0]>nums[1]){
                    return 0;
                }
                return 1;
          }
          for(int i=1;i<nums.size()-1;i++){
            bool l_check=nums[i]>nums[i-1];
            bool r_check=nums[i]>nums[i+1];
             if(l_check && r_check){
                peak=i;
             }
          }
          if(peak<0){
            if(nums[0]>nums[1]){
                return 0;
            }
            else{
                return nums.size()-1;
            }
          }
          return peak;
    }
};