class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        for(int x:nums1){
            cout<<x<<endl;
        }
       if(nums1.size()%2==0){
           int middle=(0+nums1.size()-1)/2;
           median=(double)(nums1[middle]+nums1[middle+1])/2;
       }
       else{
           int middle=(0+nums1.size())/2;
           median=nums1[middle];
       }
       return median;

    }
};