class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
           vector <bool> pre(nums.size()+1,false);
           if(nums.size()==1 && nums[0]==1) return 2;
           else if(nums.size()==1){
            return 1;
           }
           for(int i:nums){
             if(i>0 && i<=nums.size()){
                 pre[i-1]=true;
             }
           }
          for(int i=0;i<pre.size();i++){
               if(!pre[i]){
                  return i+1;
               }
          }
           return -1;
    }

};