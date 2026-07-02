class Solution {
public:
    bool ispalindromic(string s){
        int n = s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
               return false; 
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            if(ispalindromic(words[i])) return words[i];
        }
        return "";
    }
};