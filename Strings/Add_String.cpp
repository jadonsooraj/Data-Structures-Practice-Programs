#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void display(string s){
    for(char c:s) cout<<c;

    cout<<endl;
}

void add_string(string num1, string num2){
    int index1=num1.size()-1, index2=num2.size()-1;
        int sum=0, carry=0;
        string ans;
        while(num1[index1] && num2[index2]){
            sum=(num1[index1]-'0') + (num2[index2]-'0')+ carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index1--;
            index2--;
        }
        while(num1[index1]){
            sum=(num1[index1]-'0')+carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index1--;
        }
        while(num2[index2]){
            sum=(num2[index2]-'0')+carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index2--;
        }
        reverse(ans.begin(), ans.end());
        display(ans);
}

main(){
    string num1="11";
    string num2="123";
    // int size;

    // cout<<"Enter size of string: ";
    // cin>>size;

    // cout<<"\n Enter element: "<<endl;
    // for(int i=0;i<size;i++){
    //     char ele;
    //     cin>>ele;
    //     s.push_back(ele);
    // }
    display(num1);
    display(num2);
    
    add_string(num1,num2);

    return 0;
}