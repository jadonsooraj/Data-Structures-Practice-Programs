#include<iostream>
using namespace std;

main(){
    int N=4,P=3;
    int nums[4]={3,3,3,3};

    int* hash = new int[P+1]{0};

    for(int i=0;i<N;i++){
        hash[nums[i]]++;
    }

    for(int i=0;i<N;i++){
        cout<<hash[i]<<" ";
    }

    return 0;
}