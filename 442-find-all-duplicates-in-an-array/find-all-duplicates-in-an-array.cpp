class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> dlc;
        int p=0;
        while(p+1<nums.size()){
            int x=nums[p]^nums[p+1];
            if(x==0){
                dlc.push_back(nums[p]);
                p+=2;
                continue;
            }
            p++;
        }
        return dlc;
    }

};