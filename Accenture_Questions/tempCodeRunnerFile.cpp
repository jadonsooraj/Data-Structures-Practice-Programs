#include<iostream>
#include<algorithm>
using namespace std;

string binary_converter(int num){
    string ans="";
    while(num!=0){
        if(num%2==1) ans+='1';
        else if(num%2==0) ans+='0';
        num=num/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    cout<<"Binary Representation: "<<binary_converter(num)<<endl;
    return 0;
}