class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector <int> e;
        vector <int> o;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
        }
        int p1=0;
        int p2=0;
        for(int j=0;j<nums.size();j++){
            if(j%2==0){
                nums[j]=e[p1];
                p1++;
            }
            else{
                nums[j]=o[p2];
                p2++;
            }
        }
          return nums;
     }
};