#include <iostream>
#include <string>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void rotate_clockwise(string& str){
        char c=str[str.size()-1];
        for(int i=1; i<str.size();i++){
            str[i]=str[i-1];
        }
        str[0]=c;
    }
    
void rotate_anticlockwise(string& str){
        char c=str[0];
        for(int i=1; i<str.size();i++){
            str[i-1]=str[i];
        }
        str[str.size()-1]=c;
}

main(){
    string str1="amazon";
    string str2="azonam";
    int size;

    // cout<<"Enter size of string: ";
    // cin>>size;

    // cout<<"\n Enter element: "<<endl;
    // for(int i=0;i<size;i++){
    //     char ele;
    //     cin>>ele;
    //     s.push_back(ele);
    // }
    display(str1);
    string clockwise=str1;
    string anticlockwise=str1;
        
    for(int i=0;i<2;i++){
        rotate_clockwise(clockwise);
        rotate_anticlockwise(anticlockwise);
    }
    if(clockwise==str2){
        cout<<"clockwise rotated: "<<endl;
        display(clockwise);
    }
    else if(anticlockwise==str2){
        cout<<"Anticlock wise rotated"<<endl;
        display(anticlockwise);
    }
    else{
        cout<<"wrong ans.";
    }
    
    return 0;
}