#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void sort_string(string& str){
    vector<int> hash(26,0);
    string temp;

    for(int i=0;i<str.size();i++){
        hash[str[i]-'a']++;
    }
    
    for(int i=0; i<26;i++){
        while(hash[i]>0){
            temp.push_back('a'+i);
            hash[i]--;
        }
    }
    display(temp);
}

main(){
    string s="xyz";
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
    sort_string(s);


    return 0;
}