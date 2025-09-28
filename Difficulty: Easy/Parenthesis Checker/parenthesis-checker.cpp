class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> ch;
        
        for(char x : s){
            if(x == '{' || x == '(' || x == '['){
                ch.push(x);
            }else {
                if(x == '}') if(ch.empty() || ch.top() != '{') return false;
                if(x == ')') if(ch.empty() || ch.top() != '(') return false;
                if(x == ']') if(ch.empty() || ch.top() != '[') return false;
                ch.pop();
            }
        }
        return ch.empty();
    }
};