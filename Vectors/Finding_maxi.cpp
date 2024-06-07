#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr){
    cout<<endl;
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;
}

main(){
    vector <int> v;
    int size; 

    cout<<"Enter size: ";
    cin>>size;
    
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    display(v);

    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        
        if(v[i]>maxi) maxi=v[i];
    }
    cout<<maxi;

    return 0;
}