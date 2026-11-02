class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid_ele=nums[nums.size()/2];
        int min_op=0;
        for(int i=0;i<nums.size();i++){
              min_op+=abs(mid_ele-nums[i]);
        }
        return min_op;


    }
};