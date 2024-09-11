#include<iostream>
#include<string>

using namespace std;

string replace_occurance(string str){
    string ans;
    for(char c: str){
        if(c=='a')ans+='b';
        else if(c=='b') ans+='a';
        else ans+=c;
    }
    return ans;
}

main(){
    cout<<"Enter String:"<<endl;
    string str;
    getline(cin,str);

    cout<<"Modified String: "<<replace_occurance(str);

    return 0;

}