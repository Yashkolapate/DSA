class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> height;
        height.push_back(0);
        for(int i=0;i<gain.size();i++){
             height.push_back(height[i]+gain[i]);  
        }
        int maxAL=INT_MIN;
        for(int x:height){
            maxAL=max(x,maxAL);
        }
        return maxAL;

    }
};