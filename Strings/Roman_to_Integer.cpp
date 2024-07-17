#include <iostream>
#include <string>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

//we need a function which converts char(roman symbol) to to its corresponding value
int value(char c){
    if(c=='I') return 1; //I=1
    else if(c=='V') return 5; //V=5
    else if(c=='X') return 10; //X=10
    else if(c=='L') return 50; //L=50
    else if(c=='C') return 100; //C=100
    else if(c=='D') return 500; //X=500
    else if(c=='M') return 1000; //M=1000

}  

void roman_to_int(string str){
    int index=0;
    int sum=0;
    while(index<str.size()-1){
        if(value(str[index]) < value(str[index+1])){
            sum=sum-value(str[index]);
        }
        else{
            sum+=value(str[index]);
        }
        index++;
    }
    sum+=value(str[str.size()-1]);

    cout<<"Value of roman number: "<<sum<<endl;
}

main(){
    string s="XLI";
    int size;

    // cout<<"Enter size of string: ";
    // cin>>size;

    // cout<<"\n Enter element: "<<endl;
    // for(int i=0;i<size;i++){
    //     char ele;
    //     cin>>ele;
    //     s.push_back(ele);
    // }
    display(s);

    roman_to_int(s);
  
    return 0;
}