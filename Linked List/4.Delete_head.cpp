#include<bits/stdc++.h>
using namespace std;

//defining a LL node
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

//function to convert array to LL
node* arr2ll(vector<int> &nums){
    node *head= new node(nums[0]);
    node *last= head;

    for(int i=1; i<nums.size();i++){
        node *temp= new node(nums[i]);
        last->next=temp;
        last=temp;
    }
    return head;
}

//Display function
void display(node *head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//delete head function
node* delete_head(node *head){
    
    node *temp=head;
    //edge case, if there's only one node in LL
    if(temp->next==nullptr || temp==nullptr) {
        delete temp;
        return nullptr;
    }
    
    head=head->next;
    delete temp;

    return head;
}

int main(){
    vector<int> nums={3};
    node *head=arr2ll(nums);

    display(head);
    head=delete_head(head);
    display(head);

    return 0;
}