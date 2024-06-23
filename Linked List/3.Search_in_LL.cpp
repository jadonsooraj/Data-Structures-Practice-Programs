#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

//function to convert Array to LL which return the head of LL
node* arr2ll(vector<int> &nums){
    node* head= new node(nums[0]);
    node* last=head;

    for(int i=0; i<nums.size(); i++){
        node *temp= new node(nums[i]);
        last->next=temp;
        last=temp;
    }
    return head;
}

//function to search an element in LL
void search(node *head, int k){
    node *temp=head;

    while(temp){
        if(temp->data==k){
            cout<<"Element found: "<<temp->data<<endl;
            return ;
        }
        temp=temp->next;
    }
     cout<<"Element not found"<<endl;
}

main(){
    vector<int> nums={2,5,4,7,8,4,3,1};

    node *head= arr2ll(nums);

    search(head,7);

    return 0;
}