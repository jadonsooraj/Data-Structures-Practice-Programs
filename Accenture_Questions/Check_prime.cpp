#include <iostream>
using namespace std;

bool check_Prime(int num){
    int count =0;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            count++;
            if(num/i !=i) count++;
        }
        if(count>2) return false;
    }
    return true;
}
int main() {
    //take number input
    int num;
    cout << "Enter the number: ";
    cin>> num;

    if(check_Prime(num)) cout<<"isPrime";
    else cout<<"notPrime";
    return 0;
}