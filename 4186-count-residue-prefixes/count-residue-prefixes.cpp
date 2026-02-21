class Solution {
public:
    int duplicates(string str){
        set<char>st;
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            st.insert(ch);
        }
        return st.size();
    }
    int residuePrefixes(string s) {
        int k = s.length();
        if(k==1){
            return 1;
        }
        vector<string>prefix(k);
        prefix[0] = s[0];
        int count = 1;
        for(int i=1;i<k;i++){
            prefix[i] = prefix[i-1]+s[i];
            int n = prefix[i].length();
            int m = duplicates(prefix[i]);
            if(m == n%3){
                count++;
            }
        }
        return count;
    }
};