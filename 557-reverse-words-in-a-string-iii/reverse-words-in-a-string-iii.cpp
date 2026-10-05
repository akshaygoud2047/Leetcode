class Solution {
public:
    string reverseWords(string s){
    int n = s.length();
    int i = 0;
    for (int k = 1; k < n-1; k++) {
        int ch = s[k];
        if (ch == 32) {
            int j = k - 1;
            while (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            i = k+1;
        }
    }
    int j = n-1;
    while(i<j){
         swap(s[i], s[j]);
            i++;
            j--;
    }
    return s;
}
}
;