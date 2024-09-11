#include<iostream>
using namespace std;
main(){
    int num=15;
    int count=0;

    while(num){
        count+=num&1;
        num=num>>1;
    }
    cout<<count;
    return 0;
}