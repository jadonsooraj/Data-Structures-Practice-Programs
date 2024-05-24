#include<iostream>
using namespace std;

void display(int arr[],int n){

    cout<<"\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sum_subarray(int arr[], int n, int k){
    int left=0, right=0, len=0,sum=arr[0];

    while(right<n){
        while(left<=right&&sum>k){
            sum=sum-arr[left];
            left++;
        }

        if(sum==k){
            len=max(len,right-left+1);
        }

        right++;
        if(right<n) sum=sum+arr[right];
    }

    cout<<"Longest Subarray: "<<len<<endl;

    
}

main(){
    int n;
    int k;

    cout<<"Enter size of Array: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\nArray: ";
    display(arr,n);
    cout<<"Enter VAlue of K: ";
    cin>>k;

    sum_subarray(arr,n,k);

    return 0;

    
}