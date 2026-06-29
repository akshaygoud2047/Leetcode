class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size();
        int m = word.size();
        set<string>sbstr;
        sbstr.insert("");
        for(int i=0;i<m;i++){
            string s = "";
            for(int j=i;j<m;j++){
                s+=word[j];
                sbstr.insert(s);
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(sbstr.count(patterns[i])) count++;
        }
        return count;
    }
};