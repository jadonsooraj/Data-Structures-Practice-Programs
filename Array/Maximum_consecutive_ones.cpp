#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void maximum_consicutive(int arr[],int n){
    int count=1,max_count=0;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
            if(max_count<count)max_count=count;
        }
        else if(arr[i]!=arr[i-1]) count=1;
    }
    cout<<"ANS="<<max_count;
}

main(){
    int n;

    cout<<"Enter size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\nArray: ";
    display(arr,n);

    maximum_consicutive(arr,n);

    return 0;

    
}