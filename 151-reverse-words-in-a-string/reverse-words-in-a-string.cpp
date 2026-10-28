class Solution {
public:
    string reverseWords(string s) {
        vector <string> n;
        size_t st=s.find_first_not_of(" ");
        size_t ls=s.find_last_not_of(" ");
        string str=s.substr(st,ls-st+1);
        int ws=0;
        int p1=0;
        for(int p2=0;p2<str.size();p2++){
              if(str[p2 ]==' ' && ws==0){
                   n.push_back(str.substr(p1,p2-p1));
                   ws++;
              }
              else if((str[p2 ]==' ' || p2 == str.size()-1) && ws==0){
                   n.push_back(str.substr(p1,p2-p1+1));
                   ws++;
              } 
              else if(str[p2]!=' ' && ws>0 && p2 == str.size()-1){
                        p1=p2;
                        n.push_back(str.substr(p1,p2-p1+1));
              }
              else if(str[p2]!=' ' && ws>0){
                     p1=p2;
                     ws=0;
              }
        }
         string s2="";
         for(int j = n.size()-1;j>=0;j--){
            if(j !=0){
                s2+=n[j]+" ";
            }
            else{
            s2+=n[j];
            }
         }
        return s2 ;
           
    }
};