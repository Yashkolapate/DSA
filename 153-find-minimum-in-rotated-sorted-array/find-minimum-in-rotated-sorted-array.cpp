class Solution {
public:
    int findMin(vector<int>& nums) {
       int s=0;
       int e=nums.size()-1;
       int mid=(s+e)/2;
       while(s<e){
        if(nums[mid]>=nums[0] && nums[mid]<=nums[nums.size()-1]){
            return nums[0];
        }
          else if(nums[mid]>=nums[0]){
               s=mid+1;
          } 
          else{
            e=mid;
          }
              mid=(s+e)/2;
       }
       return nums[mid];
    }
};