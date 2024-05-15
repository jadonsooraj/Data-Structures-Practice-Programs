#include<iostream>
#include<vector>

using namespace std;

main()
{
    vector <int> v;
    int n,a,b;

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

    cout<<"Enter range of position to be deleted: ";
    cin>>a>>b;

    v.erase(v.begin()+a-1,v.begin()+b);

    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    return 0;

}