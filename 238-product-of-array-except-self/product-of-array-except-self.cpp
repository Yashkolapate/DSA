class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> prefix;
        vector <int> suffix;
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix.push_back(prefix[i-1]*nums[i]);
        }
        suffix.push_back(nums[nums.size()-1]);
        int j=0;
        for(int i=nums.size()-2;i>=0;i--){
            suffix.push_back(suffix[j]*nums[i]);
            j++;
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=0;i<nums.size();i++){
               int left=(i==0) ? 1: prefix[i-1];
               int right=(i==nums.size()-1) ? 1:suffix[i+1];
               nums[i]=left*right;
        } 
        return nums;
        

    }
};