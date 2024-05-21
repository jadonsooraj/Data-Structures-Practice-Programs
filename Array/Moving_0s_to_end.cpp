#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void moving_zeroes(int arr[],int n){
    int j=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        } 
    }

    if(j==-1) return;

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
            j++;
        }
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

    moving_zeroes(arr,n);

    cout<<"\nModified Array: ";
    display(arr,n);

    return 0;

    
}