// A year is a Leap year if any one of the condition is satisfied:
// 1. Year is multiple of 400
// 2. Year is multiple of 4 and not a multiple of 100 

#include<iostream>

using namespace std;

main(){
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;

    if(year%400==0) cout<<"Yes"<<endl;
    else if(year%4==0 && year%100!=0) cout<<"Yes"<<endl;
    else cout<<"No";

    return 0;
}