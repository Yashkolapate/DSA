class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int sum=0;
        int p1=0;
        int p2=0;
        while(p2<nums.size()){
            sum+=nums[p2];
            while(sum>=target){
                mini=min(mini,p2-p1+1);
                sum-=nums[p1];
                p1++;
            }
            p2++;
        }

        if(mini==INT_MAX) return 0;
        return mini;
    }
};