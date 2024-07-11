#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse_string(string& str){ 
    int n=str.size();

    for(int i=0; i<n/2;i++){
        swap(str[i],str[n-i-1]); 
    }
}

int main(){ 
    string str="Sooraj Singh";
    cout<<str<<endl;
    cout<<str.size()<<endl;
    
    reverse_string(str);

    cout<<str;

    return 0;
}