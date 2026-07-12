class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int sh = stoi(s.substr(0, 2));
        int sm = stoi(s.substr(3, 2));
        int ss = stoi(s.substr(6, 2));

        int eh = stoi(e.substr(0, 2));
        int em = stoi(e.substr(3, 2));
        int es = stoi(e.substr(6, 2));

        int start = sh * 3600 + sm * 60 + ss;
        int end = eh * 3600 + em * 60 + es;

        return end - start;
    }
};
