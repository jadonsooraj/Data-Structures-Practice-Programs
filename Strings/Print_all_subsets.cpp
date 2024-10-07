#include<iostream>
#include<string>
#include<vector>

using namespace std;

void display(vector<string> arr){
    for(string it:arr){
        cout<<it<<endl;
    }
}

vector<string> print_subsets(string str){
    int n=str.size();
    vector<string> ans;

    for(int num=0; num<(1<<n); num++){
        string substring="";
        for(int i=0; i<n; i++) if(num & (1<<i)) substring+=str[i];
        ans.push_back(substring);
    }
    return ans;
}

main(){
    string str="abc";
    //vector<string> ans=
    display(print_subsets(str));

    return 0;

}
