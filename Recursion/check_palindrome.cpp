#include<iostream> 
#include<string>
#include<vector>

using namespace std;

bool check_palindrome(string str, int i, int n){
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    check_palindrome(str,i+1,n);
}

main(){
    string str="MADAM";
    
    check_palindrome(str,0,str.size()) ? cout<<"yes" : cout<<"No";

    return 0;
    
}