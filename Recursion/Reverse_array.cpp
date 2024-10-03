#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> arr){
    cout<<endl<<"Array: ";
    for(int num:arr) cout<<num<<" ";
}

void reverse(vector<int>& arr, int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}

main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];

    reverse(arr,0,n);

    display(arr);

    return 0;

 }