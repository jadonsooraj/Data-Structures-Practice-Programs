#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector<vector<int>> vect 
    { 
        {1, 2, 0, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 10}  
    };

    cout<<vect.size()<<endl;
    cout<<vect[0].size();

    return 0;
}