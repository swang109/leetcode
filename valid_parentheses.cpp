class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack.push(i);
            }else{
                if(stack.empty()) return false;
                if(s[i]==')'){
                    if(s[stack.top()]=='(') stack.pop();
                    else return false;
                }else if(s[i]=='}'){
                    if(s[stack.top()]=='{') stack.pop();
                    else return false;
                }else if(s[i]==']'){
                    if(s[stack.top()]=='[') stack.pop();
                    else return false;
                }
            }
        }
        if(!stack.empty()) return false;
        return true;
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                stack.push(s[i]);
            }else{
                if(stack.empty()) return false;
                if(s[i]==']'){
                    if(stack.top()!='[') return false;
                    else stack.pop();
                } else if(s[i]=='}'){
                    if(stack.top()!='{') return false;
                    else stack.pop();
                } else if(s[i]==')'){
                    if(stack.top()!='(') return false;
                    else stack.pop();
                }
            }
        }
        return stack.empty();
    }
};
