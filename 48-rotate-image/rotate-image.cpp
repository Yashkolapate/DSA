class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>v(m,vector<int>(n));
        int exC=0;
        int Tr=0;
        int Tc=0;
        int sR=0;
        int eR=m-1;
        int total=m*n;
        int count=0;
        while(count<total){
            for(int index=eR;count<total && index>=sR;index--){
                v[Tr][Tc]=matrix[index][exC];
                count++;
                Tc++;
            }
            Tr++;
            Tc=0;
            exC++;
        }

        matrix=v;

    }
};