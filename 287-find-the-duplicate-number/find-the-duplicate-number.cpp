class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int R=1;
        int L=0;
        while(R<nums.size()){
            if(nums[L]==nums[R]){
                return nums[L];
            }
            else{
                L++;
                R++;
            }
        }
        return -1;
    }
};