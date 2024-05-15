#include<iostream>
#include<vector>
using namespace std;

main()
{
    vector <int> v;
    int n,num1;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Enter no. of elements to append: ";
    cin>>num1;

    cout<<"Enter elements: ";
    for(int i=0;i<num1;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}