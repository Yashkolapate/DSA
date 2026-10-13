class Solution {
public:
    int total_sum(vector <int> nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
    int minOperations(vector<int>& nums, int x) {
            int ts=total_sum(nums);
            int target=ts-x;
            int p1=0;
            int sm=0;
            int maximum=-1;
            for(int p2=0;p2<nums.size();p2++){
                sm+=nums[p2];
                while(sm>target && p1<=p2){
                    sm-=nums[p1];
                    p1++;
                }
                if(sm==target){
                    maximum=max(maximum,p2-p1+1);
                }
            }

               if (maximum == -1) return -1;

               return nums.size() - maximum;

           
    }
};