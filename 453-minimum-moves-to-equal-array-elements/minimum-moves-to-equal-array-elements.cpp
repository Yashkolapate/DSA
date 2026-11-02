class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_ele=nums[0];
        int min_op=0;
        for(int i=0;i<nums.size();i++){
            if(max_ele==nums[i]){
                continue;
            }
            min_op+=abs(max_ele-nums[i]);
        }
        return min_op;
    }
};