#include<iostream>

using namespace std;

int fact(int num){
    if(num==1) return 1;
    return num*fact(num-1);
}

main(){
    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    cout<<"Factorial: "<<fact(num)<<endl;
    return 0;
}