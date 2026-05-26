class Solution {
public:
    int numberOfSpecialChars(string word) {
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