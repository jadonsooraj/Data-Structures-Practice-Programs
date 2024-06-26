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

int main(){
    
    vector<int> nums={2,5,3,7};

    //creating a simple node
    node* y= new node(nums[0]);
    //to access the data of a node
    cout<<"Data of node: "<<y->data<<endl;
    //y is the pointer to the node containing its address 
    cout<<"Pointer to the node: "<<y<<endl;

    //converting Array to LL
    node* head=  arr2ll(nums);

    cout<<"Head of LL "<<head->data;

    return 0;
}