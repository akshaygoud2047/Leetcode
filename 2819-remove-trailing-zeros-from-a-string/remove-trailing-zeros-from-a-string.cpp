class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size()-1;
        for(int i=n;i>=0;i--){
            char ch = num[i];
            if(ch == '0') num = num.substr(0,i);
            else return num;
        }
        return num;
    }
};