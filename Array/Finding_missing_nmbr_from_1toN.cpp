#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void missing_element(int arr[],int n){
    int j=1;
    for(int i=0;i<n;i++){

        if(arr[i]^j!=0) {
            while(arr[i]!=j){
            cout<<j<<" ";
            j++;
            }
        }
        j++;
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

    missing_element(arr,n);

    

    return 0;

    
}