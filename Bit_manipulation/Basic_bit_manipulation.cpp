#include<iostream>
using namespace std;
//toggle bit
int toggle_bit(int num, int i){
    return num^(1<<i);
}

//odd/even
string check_odd_even(int num){
    if(num&1) return "ODD";
    else return "EVEN";
}

//function to remove last set bit from LSB
int remove_last_bit(int num){
    return num & (num-1);
}

//function to check power of 2
string check_powerof2(int num){
    return num > 0 && (num & num-1)==0 ? "Yes":"No";
}

int main(){
    int num=1;
    int i=1;
    cout<<"Num:"<<num<<endl;
    cout<<"ODD/EVEN: "<<check_odd_even(num)<<endl;
    cout<<"Toggle number: "<<toggle_bit(num,i)<<endl;
    cout<<"After removing last set bit: "<<remove_last_bit(num)<<endl;
    cout<<"Power of 2: "<<check_powerof2(num)<<endl;

    return 0;
}