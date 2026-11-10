class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;
        int p=nums[0];
        mp[p]++;
        while(mp[p]<2){
            p=nums[p];
            mp[p]++;
        }
        return p;
    }
};