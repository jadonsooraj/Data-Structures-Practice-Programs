//given an Arr={2,5,3,7}, Declare a LL using this array

#include<bits/stdc++.h>
using namespace std;

//defining a LL node
class node{
    public:
    int data;
    node *next;

    public:
    //defining a constructor
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

//function to convert Array to LL which return the head of LL
node* arr2ll(vector<int> &nums){
    
    //initialising 'head' node
    node* head =new node(nums[0]);
    //initialising a mover pointer which helps in traversing through LL
    node* mover= head;

    //traversing through Array and converting it into LL
    for(int i=1; i<nums.size();i++){
        node* temp= new node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

//function to display LL
void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    
    vector<int> nums={2,5,3,7};
    //converting Array to LL
    node* head=  arr2ll(nums);
    display(head);

    return 0;
}