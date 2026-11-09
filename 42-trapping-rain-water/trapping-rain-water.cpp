class Solution {
public:
    int trap(vector<int>& height) {
         int L=0;
         int R=height.size()-1;
         int left_max=INT_MIN;
         int Right_max=INT_MIN;
         int t_cnt=0;
         while(L<R){
            if(height[L]<height[R]){
                 left_max=max(left_max,height[L]);
                 t_cnt+=left_max-height[L];
                 L++;
            }
             
            else{
               Right_max=max(Right_max,height[R]);
               t_cnt+=Right_max-height[R];
               R--;
            }
         }
         return t_cnt;
    }
};