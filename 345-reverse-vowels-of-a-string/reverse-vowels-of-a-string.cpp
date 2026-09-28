
class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;

        set<char> st = {'a', 'e', 'i', 'o', 'u',
                        'A', 'E', 'I', 'O', 'U'};

        while (i < j) {
            char c1 = s[i];
            char c2 = s[j];

            bool v1 = st.find(c1) != st.end();
            bool v2 = st.find(c2) != st.end();

            if (v1 && v2) {
                swap(s[i], s[j]);
                i++;
                j--;
            } 
            else if (!v1) {
                i++;
            } 
            else {
                j--;
            }
        }

        return s;
    }
};