#include<iostream>

using namespace std;

int pow(int x, int n){
    int ans=1;
    if(n<=0) return ans;
    else if((n&1)!=0) return ans=ans*x*pow(x,n-1);
    else return ans=ans*pow(x*x,n/2);
}

main(){
    cout<<"Enter x: ";
    int x;
    cin>>x;

    cout<<"Enter n: ";
    int n;
    cin>>n;

    cout<< pow(x,n);

    return 0;
}