class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int cnt=1;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return cnt;
        int begin=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==begin+1){
                cnt++;
                begin=nums[i];
            }
            else if(nums[i]==begin){
                begin=nums[i];
            }
            else if(nums[i]!=begin+1){
                cnt=1;
                begin=nums[i];
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};