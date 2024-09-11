#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string reverse_string(string str){
    int i=0, n=str.size();
    int left=0, right=0;
    reverse(str.begin(), str.end());
    while(i<n){
        //skip leading spaces
        while(str[i]==' ' && i<n) i++;
        if(i==n) break;

        //copy characters of a word to correct position
        while(str[i]!=' ' && i<n){
            str[right++]=str[i++];
        }

        //reverse the word
        reverse(str.begin()+left, str.begin()+right);
        
        //add space after the word
        str[right++]=' ';
        left=right;
        i++;

    }

    //finnaly resize the string
    str.resize(right-1);

    return str;
}

int main(){
    cout<<"Enter String:"<<endl;
    string str="";
    getline(cin,str);

    cout<<"Reverse sentence: "<<reverse_string(str);

    return 0;
}