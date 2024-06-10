#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    cout<<endl;
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;
}
main()
{
    vector <int> heights;
    int size;
    
    cout<<"Enter size of vector: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        heights.push_back(ele);
    }
    display(heights);
    
    vector<int> expected(size);
    for(int i=0;i<size;i++){
        expected.push_back(heights[i]);
    }

    sort(expected.begin(),expected.end());
    display(expected);


    return 0;
}