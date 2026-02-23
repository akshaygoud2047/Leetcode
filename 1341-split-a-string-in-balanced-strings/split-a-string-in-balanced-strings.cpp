class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int count = 0;
        int lcount = 0;
        int rcount = 0;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == 'L'){
                lcount++;
            }
            else{
                rcount++;
            }
            if(lcount == rcount){
                count++;
                lcount = 0;
                rcount = 0;
            }
        }
        return count;
    }
};