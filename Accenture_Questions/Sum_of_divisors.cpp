#include<iostream>
using namespace std;

int SumOfDivisor(int num){
    int n=num;
    int sum=0;
    for(int i=1; i<=num; i++){
        if(num%i==0) sum+=i;
    }
    return sum;
}

main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    cout<<"Sum: "<<SumOfDivisor(num)<<endl;

    return 0;
}