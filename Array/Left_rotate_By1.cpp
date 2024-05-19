#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotatearray(int arr[],int n){
    int temp=arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
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

    rotatearray(arr,n);

    cout<<"\nRotated Array: ";
    display(arr,n);

    return 0;

    
}