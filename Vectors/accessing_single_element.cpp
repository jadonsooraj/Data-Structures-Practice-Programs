#include<iostream>
#include<vector>
using namespace std;

main()
{
    vector <int> v;
    int size,pos;

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

    if(pos<size)
    cout<<v.at(pos-1);
    else
    cout<<"invalid position";

    return 0;
}