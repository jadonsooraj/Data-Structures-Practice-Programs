#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void sentence_build(string str){
    string temp;
    int count=0, pos;
    vector<string> ans(10);
    for(int i=0; i<str.size();i++){
        if(str[i]==' '){
            count++;
            pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            i++;
        }
        temp=temp+str[i];
    }
    //extracting last word as it doesnot end with space
        count++;
        pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
    
    //making sentence using ans vector
    for(int i=1; i<=count; i++){
        temp=temp+ans[i];
        temp=temp+' ';
    }
    //clear last extra space
    temp.pop_back();
    display(temp);
    return ;
}

main(){
    string s="is2 sentence4 this1 a3";
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
    sentence_build(s);

    return 0;
   
}