#include<iostream>
#include<vector>
using namespace std;

main()
{
    vector <int> v;
    int size,num1,num2;
    
    cout<<"Enter size of vector: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Enter range to access: ";
    cin>>num1>>num2;
    
    for(int i=num1-1;i<num2;i++)
    cout<<v.at(i)<<" ";

    return 0;
}