#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void lowerbound(int A[],int size,int query,vector<int>v)
{
    vector<int>::iterator low1;

    for(int i=0;i<query;i++)
    {
        low1=lower_bound(v.begin(),v.end(),A[i]);
    
        if(binary_search(v.begin(),v.end(),A[i]))
        {
        cout<<"Yes "<<(low1-v.begin()+1)<<endl;
        }

        else
        cout<<"No "<<(low1-v.begin()+1)<<endl;
    }
    
}
main()
{
    vector <int> v;
    int size,query;
    
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

    cout<<"Enter no. of queries: ";
    cin>>query;
    int A[query];
    
    for(int i=0;i<query;i++)
    cin>>A[i];

    lowerbound(A,size,query,v);

   return 0;
}