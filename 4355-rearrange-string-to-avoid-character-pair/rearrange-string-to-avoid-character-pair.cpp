class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.length();
        string t = "";
        for(int i=0;i<n;i++){
            if(s[i]==y){
                t=s[i]+t;
            }
            else{
                 t+=s[i];
            }
        }
        return t;
    }
};