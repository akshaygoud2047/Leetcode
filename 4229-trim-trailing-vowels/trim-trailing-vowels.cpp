class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.length()-1;
        string s1 = "";
        while(n>=0){
            char c = s[n];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                s = s.substr(0,n);
                n--;
            }
            else{
                return s;
            }   
        }
        // for(int i=n-1;i>=0;i--){
        //     char c= s[i];
        //     if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        //         continue;
        //     }
        //     else{
        //         s1 = c + s1;
        //     }
        // }
        //return s1;
        return s;
    }
};