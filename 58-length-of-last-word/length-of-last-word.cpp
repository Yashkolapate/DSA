class Solution {
public:
    int lengthOfLastWord(string s) {
        string str=s;
        size_t start = str.find_first_not_of(" ");
        size_t end= str.find_last_not_of(" ");
        if(start != string::npos){
            str=str.substr(start, end-start+1);
        }
        else{
            str="";
        }
         size_t last=str.find_last_of(' ');
         return str.size()-last-1;

    }
};