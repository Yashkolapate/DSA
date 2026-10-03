class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=m*n-1;
        int mid=(s+e)/2;
        while(s<=e){
            int element=matrix[mid/n][mid%n];
            if(element==target){
                return 1;
            }
            else if(element>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=(s+e)/2;
        }
           return false;
           
       
    }
};