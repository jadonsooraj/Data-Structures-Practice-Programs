#include <iostream>
#include <string>
#include <vector> // Add this line to include the vector header

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void integer_to_roman(int num){
    vector<string> roman ={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    vector<int> value ={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans;

    for(int i=0; i<roman.size(); i++){
        while(num>=value[i]){
            num=num-value[i];
            ans=ans+roman[i];
        }
    }
    cout<< "Roman Symbol: ";
    display(ans);
}

main(){
    int num=58;

    cout<<"number: "<<num<<endl;
    integer_to_roman(num);

    return 0;
}