#include<iostream>
#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//priority function
int priority(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='-' || ch=='+') return 1;
    else return -1;
}

string InfixToPostfix(string& str){
    stack<char> stk;
    string ans;
    int i=0;

    while(i<str.size()){
        //if str[i] is an operand
        if( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')) ans.push_back(str[i]);
        

        //if str[i] is an opening bracket
        else if(str[i]=='(') stk.push(str[i]);

        //if str[i] ius a closing bracket
        else if(str[i]==')'){
            //remove everything from stack untill you found an opening bracket
            while(!stk.empty() && stk.top()!='('){
            ans.push_back(stk.top());
            stk.pop(); 
            }
            stk.pop();
        }
        
        //if str[i] is an operator
        else{
            //if priority(str[i] < stk.top()), you take out from stack untill top element is of less priority
            while(!stk.empty() && priority(str[i]) <= priority(stk.top())){
                ans.push_back(stk.top());
                stk.pop();
            }
            stk.push(str[i]);
        }
        i++;
    }
    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }

    return ans;
}

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
int main(){
    string str="a+b*(c^d-e)";
    
    cout<<"Infix expression: "<<str<<endl;
    cout<<"PreFix expression: "<<InfixToPrefix(str);
    

    return 0;
}