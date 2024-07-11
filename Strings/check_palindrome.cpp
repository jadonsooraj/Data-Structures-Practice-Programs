#include <iostream>
#include <string>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

bool checkPalindrome(string s){
    int front=0, back=s.size()-1;

    while(front<=back){
        if(s[front]==s[back]){
            front++;
            back--;
        }
        else return false;
    }
    return true;
    
}
main(){
    string s;
    int size;

    cout<<"Enter size of string: ";
    cin>>size;

    cout<<"\n Enter element: "<<endl;
    for(int i=0;i<size;i++){
        char ele;
        cin>>ele;
        s.push_back(ele);
    }
    display(s);

    if(checkPalindrome(s)) cout<<"true";
    else cout<<"False";
    return 0;
}