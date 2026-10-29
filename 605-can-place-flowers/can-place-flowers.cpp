class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int siz=flowerbed.size();
        int cnt=0;
        for(int i=0;i<siz;i++){
         if(flowerbed[i]==0){
              bool leftEmpty=(i==0 || flowerbed[i-1]==0);
              bool rightEmpty=(i==siz-1 || flowerbed[i+1]==0);
              if(leftEmpty && rightEmpty){
                 cnt++;
                 flowerbed[i]=1;
              }
              if(cnt>=n){
                return true;
              }
         }
        }
        return cnt>=n;
    }
};