#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

int longest_palindrome(string str){
    //Storing count of characters
    vector<int> lower(26,0);
    vector<int> upper(26,0);

    for(int i=0; i<str.size(); i++){
        if(str[i]>='a') lower[str[i]-'a']++;
        else upper[str[i]-'A']++;
    }

    int longestcount=0;
    bool odd=0;
    for(int i=0;i<26;i++){
        //for lowercase
        if(lower[i]%2==0) longestcount+=lower[i];
        else{
            longestcount=longestcount+lower[i]-1;
            odd=1;
        }

        //for uppercase
        if(upper[i]%2==0) longestcount+=upper[i];
        else{
            longestcount=longestcount+upper[i]-1;
            odd=1;
        }
    }

    return longestcount+odd;
}

int main(){
    string s="aabbccde";
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
    cout<<"Longest palindrome: "<<longest_palindrome(s);
   
    return 0;
}