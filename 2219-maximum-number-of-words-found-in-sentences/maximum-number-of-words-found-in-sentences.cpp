class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int count1 = INT_MIN;
        for(int i=0;i<n;i++){
            int count2 = 0;
            string s1 = s[i];
            for(int j=0;j<s1.length();j++){
                if(s1[j]==' '){
                    count2++;
                }
            }
            count1 = max(count2,count1);
        }
        return count1+1;
    }
};