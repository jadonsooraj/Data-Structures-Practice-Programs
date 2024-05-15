#include<iostream>

using namespace std;
main()
{
    int n;
    cout<<"Size:";
    cin>>n;
    int a[n];

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int t;
    cout<<"Enter target:";
    cin>>t;

    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            cout<<i;
            return 0;
        }
        
    }

    int j=0;
    while(t>a[j])
    j++;

    cout<<j;
    return 0;
}