class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> empty;
        for(int i=0;i<nums.size();i++){
            if(find(empty.begin(),empty.end(),nums[i])== empty.end()){
                empty.push_back(nums[i]);
            }
        }
         nums=empty;
         return nums.size();

    }
};