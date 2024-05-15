#include<iostream>
using namespace std;

void display(int A[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void reverse_array(int A[], int left, int right){

    if(left<right){
        swap(&A[left],&A[right]);
        
        reverse_array(A,left+1,right-1);
    }
    return;
}

main(){
    int n;

    cout<<"Enter size of Array: ";
    cin>>n;

    int A[n];
    cout<<"\nEnter Elements: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    cout<<"\nArray: ";
    display(A,n);

    
    reverse_array(A,0,n-1);

    cout<<"\nReverse Array: ";
    display(A,n);

    return 0;

    
}