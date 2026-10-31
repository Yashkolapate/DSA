class Solution {
public:
bool checkVowels(char ch){
    char arr[10]={'a','e','i','u','o','A','E','I','U','O'};
    for(int i=0;i<10;i++){
        if(ch==arr[i]){
            return true;
        }
    }
       return false;
}
    string reverseVowels(string s) {
        int p1=0;
        int p2=s.size()-1;
        while(p1<p2){
            if(!checkVowels(s[p1]) || s[p1]==' '){
                p1++;
            }
            if(!checkVowels(s[p2]) || s[p2]==' '){
                p2--;
            }
            if(checkVowels(s[p1]) && checkVowels(s[p2])){
                swap(s[p1],s[p2]);
                p1++;
                p2--;
            }
        }
        return s;
    }
};