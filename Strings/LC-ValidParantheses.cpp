class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for(int i=0; i<s.size(); i++){
            if (charStack.empty()) {
                charStack.push(s[i]);
            }
            else if(charStack.top()=='(' && s[i]==')'){
                charStack.pop();
            }else if(charStack.top()=='[' && s[i]==']'){
                charStack.pop();
            }else if(charStack.top()=='{' && s[i]=='}'){
                charStack.pop();
            }else{
                charStack.push(s[i]);
            }
        }
        return (charStack.empty());
    }
};
