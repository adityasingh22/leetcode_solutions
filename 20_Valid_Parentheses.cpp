class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        bool flag=true;
        if (s.length()<2)
            return false;
        for (char x : s){
            if (x=='(' || x=='{' || x=='[')
                stack.push(x);
            else if (x==')' && !stack.empty() && stack.top()=='(')
                stack.pop();
            else if (x=='}' && !stack.empty() && stack.top()=='{')
                stack.pop();
            else if (x==']' && !stack.empty() && stack.top()=='[')
                stack.pop();
            else
                flag=false;
        }
        if (stack.empty() && flag)
            return true;
        return false;
    }
};
