class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
          long long cnt=0;
          int L=0;
          int R=0;
          map <long long, int> mp;
          while(L<=R && R<nums.size()){
                mp[nums[R]]++;
                auto first_itr=mp.begin();
                auto end_itr=prev(mp.end());
                if(( end_itr->first - first_itr->first)<=2){
                    cnt+=R-L+1;
                    R++;
                }
                else{
                  if(mp[nums[L]]==1){
                      mp.erase(nums[L]);
                  }
                  else{
                   mp[nums[L]]--;
                  }
                   L++;
                   mp[nums[R]]--;
                   
                }
          }
          return cnt;

    }
};