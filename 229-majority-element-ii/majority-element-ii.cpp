class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int,int> count;
        vector <int> v;
        for(int i=0;i<nums.size();i++){
            if(count.find(nums[i])!=count.end()){
                 count[nums[i]]++;
            }
            else{
                count[nums[i]]=1;
            }
        }
        map <int,int>::iterator itr;
        for(itr=count.begin();itr!=count.end();itr++){
            if((*itr).second > (nums.size()/3)){
                v.push_back((*itr).first);
            }
        }
        

        return v;
    }
};