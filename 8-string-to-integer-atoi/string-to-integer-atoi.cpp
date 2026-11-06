class Solution {
public:
    long long converttoINT(vector <int> &a){
        long long num=0;
        int sign=1;
        int cnt=0;
           if(a[0]<0){
                sign=-1;
             }
        
         for(int i=a.size()-1;i>=1;i--){
               if(-((num)+a[i]*pow(10,cnt)) < INT_MIN  && (sign==-1)){
                  return INT_MIN;
                }
               else if(a[i]*pow(10,cnt) > INT_MAX && (sign==1)){
                  return INT_MAX;
             }
                num+=a[i]*pow(10,cnt);
                cnt++;
             
          
        }
        if(sign==-1){
            num*=-1;
        }
        else{
            if(num+a[0]*pow(10,cnt) > INT_MAX && (sign==1)){
                  return INT_MAX;
             }
           num+=a[0]*pow(10,cnt); 
        }
        return num;
    }
    int myAtoi(string s) {
        vector <int> integer;
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i<s.size() && ((s[i]=='-')|| (s[i]=='+'))){
            if(s[i]=='-'){
                integer.push_back(-1);
            }
            i++;
        }
        for(;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                integer.push_back(s[i]-'0');
            }
            else{
                break;
            }
            }       
        if(integer.empty() ||(integer.size()==1 && integer[0]==-1)) return 0;
        return converttoINT(integer);
    }
};