#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotatearray(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
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

    int k=0;
    cout<<"\nEnter times to rotate: ";
    cin>>k;
    rotatearray(arr,n,k);

    cout<<"\nRotated Array: ";
    display(arr,n);

    return 0;

    
}