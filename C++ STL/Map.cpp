#include <iostream>
#include<map>
#include<vector>

int main() {
    std::vector<int> arr={1,2,21,2,3,1,1,3};

    std::map<int,int> mpp;

    //array
    std:: cout<<"Array: ";
    for( int num: arr) std::cout<<num<<" ";

    std::cout<<std::endl;
    
    //storing occurunces
    for( int num: arr) mpp[num]++;

    for(auto& num: mpp) std::cout<<"Key: "<<num.first<<" Value: "<<num.second<<std::endl;

    return 0;
}