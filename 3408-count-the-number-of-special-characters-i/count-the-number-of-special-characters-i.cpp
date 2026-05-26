class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>hash;
        int n = word.length();
        for(int i=0;i<n;i++){
            hash[word[i]]++;
        }
        int count = 0;
        set<char>wrd(word.begin(),word.end());
        for(char ch : wrd){
            char chr = ch;
            char nxtch = ch + 32;
            for(char c : wrd){
                if(c == nxtch){
                    count++;
                }
            }
        }
        return count;
    }
};