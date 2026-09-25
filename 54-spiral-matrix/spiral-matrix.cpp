class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> spiral;
        int row=matrix.size();
        int col= matrix[0].size();
        int count=0;

        int startingR=0;
        int startingC=0;
        int endingR=row-1;
        int endingC=col-1;
        while(count < (row*col)){
            for(int index=startingR;count < (row*col) && index<=endingC;index++){
                spiral.push_back(matrix[startingR][index]);
                count++;
            }
            startingR++;

            for(int index=startingR; count < (row*col) && index<=endingR;index++){
                spiral.push_back(matrix[index][endingC]);
                count++;
            }
            endingC--;

            for(int index=endingC;count < (row*col) && index>=startingC;index--){
                   spiral.push_back(matrix[endingR][index]);
                   count++;
            }

            endingR--;
            for(int index=endingR;count < (row*col) && index>=startingR;index--){
                spiral.push_back(matrix[index][startingC]);
                count++;
            }
            startingC++;
        }
        return spiral;
        
    }
};