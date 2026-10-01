class Solution {
public:
    bool isValid(string str) {
        stack<int>s;
        int n = str.size();
        for(int i=0;i<n;i++){
            char ch = str[i];
            // if(ch == '[' || ch == '{' || ch == '(')
             if(ch == '[' || ch == '{' || ch == '('){

                s.push(ch);
            }
            else{ //closing
                if(s.empty()){ // insufficient number of opening breckests
                    return false;
                } 
                int top = s.top();
                if( (top == '(' && ch == ')' ) ||
                    (top == '{' && ch == '}' ) || 
                    (top == '[' && ch == ']' )){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(s.empty()){
            return true;
        }
        return false;
    }
};