class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==n-1 && cnt==1){
                return nums[n-1];
            }
            else if(nums[i]==nums[i+1]){
                cnt++;
            }
            else if((nums[i]!=nums[i+1]) && (cnt==3) ){
                     cnt=1;
            }
            else{
                return nums[i];
            }
        }
        return 1;
    }
};