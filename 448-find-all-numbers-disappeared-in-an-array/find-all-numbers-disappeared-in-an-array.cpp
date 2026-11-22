class Solution {
public:
    vector <int> cr_sorting(vector <int>& nums){
           int i=0;
           int n= nums.size();
           while(i<n){
              int cr_idx=nums[i]-1;
              if(nums[i] != nums[cr_idx]){
                swap(nums[i],nums[cr_idx]);    
              }
              else{
                  i++;
              }
           }
           return nums;
    }

    vector <int> cr_duplicates(vector <int>& nums){
           int i=0;
           int n= nums.size();
           while(i<n){
              int cr_idx_val=i+1;
              if(nums[i]==cr_idx_val){
                 nums[i]=-1;
              }
              else{
                nums[i]=i+1;
              }
                i++;
           }
           return nums;
    }

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        cr_sorting(nums);
        cr_duplicates(nums);
        nums.erase(remove(nums.begin(),nums.end(),-1),nums.end());
        return nums;
        
    }
};