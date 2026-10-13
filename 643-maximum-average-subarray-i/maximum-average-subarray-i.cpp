class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
           double sum=0;
           double maxavg=INT_MIN;
           double lvavg=0;
           for(int i=0;i<k;i++){
            sum+=nums[i];
           }
           lvavg=sum/k;
           maxavg=max(lvavg,maxavg);
           for(int i=k;i<nums.size();i++){
                sum+=nums[i]-nums[i-k];
                lvavg=sum/k;
                maxavg=max(lvavg,maxavg);
           }  

           return maxavg;

    }
};