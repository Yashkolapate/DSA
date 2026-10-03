class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int col=n-1;
        while(row < m && col >= 0){
            int current=matrix[row][col];
            if(current==target){

                return 1;
            }
            else if(current>target){
                col-=1;
            }
            else{
                row+=1;
            }
        }
        return 0;
    }
};