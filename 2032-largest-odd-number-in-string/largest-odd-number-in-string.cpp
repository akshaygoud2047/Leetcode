class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.length() - 1;
        
        // for(int i=n;i>=0;i--){ // time limit is exceeding for this problem.
        //     if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '0'){
        //         s = s.substr(0,i);
        //     }
        //     else{
        //         return s;
        //     }
        // }
        // return "";
        for(int i=n;i>=0;i--){
            int m = s[i]-'0';
            if(m%2!=0){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};
