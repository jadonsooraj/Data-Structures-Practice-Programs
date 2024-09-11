#include <iostream>
using namespace std;

int reverse_number(int num){
    int digit,ans=0;
    while(num>0){
        digit=num%10;
        ans=10*ans+digit;
        num=num/10;
    }
    return ans;
}
int main() {
    //take number input
    int num;
    cout << "Enter the number: "<<endl;
    cin>> num;

    cout<<"Reverse number : "<<reverse_number(num);


    return 0;
}