class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.length()-1;
        while(n>=0){
            char c = s[n];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                n--;
            }
            else{
                return s.substr(0,n+1);
            }   
        }
        return s.substr(0,n+1);
    }
};