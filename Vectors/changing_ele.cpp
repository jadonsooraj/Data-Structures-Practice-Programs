#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> v;
    int size,pos,num1;

    cout<<"Enter size: ";
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

    cout<<"Enter position: ";
    cin>>pos;
    cout<<"Enter element: ";
    cin>>num1;
    v.at(pos-1)=num1;

     for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}