class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> p;
        vector <int> n;
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
           for(int j=0;j<nums.size()/2;j++){
                ans.push_back(p[j]);
                ans.push_back(n[j]);
           } 
           return ans;   
    }
};