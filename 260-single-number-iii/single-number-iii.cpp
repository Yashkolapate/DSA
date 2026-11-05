class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>single;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]^nums[i+1])==0){
                i++;
            }
            else{
                single.push_back(nums[i]);
            }
        }
        if(single.size()==1){
            single.push_back(nums[nums.size()-1]);
        }
        return single;
    }
};