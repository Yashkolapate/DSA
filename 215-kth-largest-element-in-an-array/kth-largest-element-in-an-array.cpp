class Solution {
public:
   int findKthLargest(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto it : mp){
            pq.push({it.first,it.second});
        }
        int cnt=0;
        int ans=0;
        while(!pq.empty()){
           cnt+=pq.top().second;
           if(cnt>=k){
             ans=pq.top().first;
             break;
           }
           pq.pop();
        }
         return ans;
    }
};