string InfixToPrefix(string& str){
    //reverse the infix expression
    string ans;
    reverse(str.begin(), str.end());

    //interchange opening and closing brackets
    for(char& ch: str){
        if(ch==')') ch='(';
        else if(ch=='(') ch=')';
    }
    ans=InfixToPostfix(str);

    //reverse the postfix expression
    reverse(ans.begin(), ans.end());

    return ans;
}