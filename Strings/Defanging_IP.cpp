#include <iostream>
#include <string>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void defang_ip(string& str){
    string temp;

    for(int i=0;i <str.size(); i++){
        if(str[i]=='.'){
            temp.push_back('[');
            temp.push_back('.');
            temp.push_back(']');
            i++;
        }
        temp.push_back(str[i]);
    }
    display(temp);
}

main(){
    string s="1.1.1.1";
    int size;

    // cout<<"Enter size of string: ";
    // cin>>size;

    // cout<<"\n Enter element: "<<endl;
    // for(int i=0;i<size;i++){
    //     char ele;
    //     cin>>ele;
    //     s.push_back(ele);
    // }
    display(s);

    defang_ip(s);

    return 0;
}