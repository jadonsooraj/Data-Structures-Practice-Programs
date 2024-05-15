#include<iostream>
#include<vector>

using namespace std;

main()
{
    vector<int> v;
    int n,x;

    cout<<"Enter size of vector:";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Enter position of element to be deleted:";
    cin>>x;
    v.erase(v.begin()+x-1);

    for(int i:v)
    cout<<i<<" ";
    cout<<endl;


    return 0;
}