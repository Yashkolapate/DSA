class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector <int> prefix;
        unordered_map <int,int> mp;
        prefix.push_back(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            prefix.push_back(prefix[i]-1);
            continue;
            }
            prefix.push_back(prefix[i]+1);
        }
        int max_len=INT_MIN;
        for(int i=0;i<prefix.size();i++){
            auto key=mp.find(prefix[i]);
            if(key!=mp.end()){
                   max_len=max(max_len,i-mp[prefix[i]]);
            }
            else{
                mp[prefix[i]]=i;
            }
        }
        if(max_len==INT_MIN) return 0;
        return max_len;
    }
};