#include <iostream>
#include <string>
using namespace std;

//function to convert roman symbol into their integer value
int value(char c){
    if(c=='I') return 1; //I=1
    else if(c=='V') return 5; //V=5
    else if(c=='X') return 10; //X=10
    else if(c=='L') return 50; //L=50
    else if(c=='C') return 100; //C=100
    else if(c=='D') return 500; //X=500
    else if(c=='M') return 1000; //M=1000
    return 0;
}

int roman2integer(string roman){
    int sum=0;
    for(int i=0; i<roman.size()-1; i++){
        if(value(roman[i]) < value(roman[i+1])) sum-=value(roman[i]);
        else sum+=value(roman[i]);
    }
    sum+=value(roman[roman.size()-1]);
    return sum;
}

int main() {
    string roman_number;

    cout << "Enter Roman number: ";
    getline(cin, roman_number);
    
    cout<<"Integer value: "<<roman2integer(roman_number);
    return 0;
}