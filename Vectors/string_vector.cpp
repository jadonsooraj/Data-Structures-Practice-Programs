#include<iostream>
#include<vector>
#include<string>
using namespace std;
main()
{
    vector <string> names;
    int size;

    cout<<"Enter no. of names: ";
    for(int i=0;i<size;i++)
    {
        string ele;
        cin>>ele;
        names.push_back(ele);
    }

    for(string i:names)
    cout<<i<<" ";

    return 0;
}