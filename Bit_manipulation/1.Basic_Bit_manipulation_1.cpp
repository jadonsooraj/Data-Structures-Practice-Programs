#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string binary_converter(int num){
    if (num == 0) return "0";
    string temp="";
    while(num>0){
        if(num%2==1) temp+='1';
        else temp+='0';
        num=num/2;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}

bool check_ith_bit(int &num){
    int i;
    cout<<"Enter bit to check: ";
    cin>>i;
    return (num & (1<<(i-1))) != 0;
}

//set ith bit
void set_ith_bit(int &num){
    cout<<"Bit to set: ";
    int i;
    cin>>i;
    num= num | (1<<i-1);
    cout<<"After setting ith bit: "<<binary_converter(num)<<endl;
    return;
}

//clear ith bit
void clear_ith_bit(int &num){
    int i;
    cout<<"Enter bit to clear: ";
    cin>>i;
    num= num & ~(1<<i-1);
    cout<<"After clearing ith bit: "<<binary_converter(num)<<endl;
    return;
}
//toggle ith bit
void toggle(int &num){
    int i;
    cout<<"Enter Bit to Toggle: ";
    cin>>i;

    num= num^(1<<i-1);
    cout<<"After toggling: "<<binary_converter(num)<<endl;
    return;
}
int main(){
    int num=4;
    cout<<"Binary: "<<binary_converter(num)<<endl;

   //check ith bit
    check_ith_bit(num) ? cout<<"IsSet"<<endl:cout<<"Notset"<<endl;

    //set ith bit
    set_ith_bit(num);

    //clear ith bit
    clear_ith_bit(num);
    
    //toggle ith bit
    toggle(num);

    //clear right-most bit

    

    return 0;
}