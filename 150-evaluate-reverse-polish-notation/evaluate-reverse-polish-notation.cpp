class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> s;

        for(int i = 0; i < n; i++) {
            string token = tokens[i];

            if(token == "+" || token == "-" || token == "*" || token == "/") {
                
                int e1 = s.top();
                s.pop();

                int e2 = s.top();
                s.pop();

                if(token == "+") {
                    s.push(e2 + e1);
                }
                else if(token == "-") {
                    s.push(e2 - e1);
                }
                else if(token == "*") {
                    s.push(e2 * e1);
                }
                else if(token == "/") {
                    s.push(e2 / e1);
                }
            }
            else {
                s.push(stoi(token));
            }
        }

        return s.top();
    }
};