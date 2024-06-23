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
node* delete_tail(node *head){
    node *temp=head;
    //edge case, when LL is empty or contains only i node
    if(head==nullptr || head->next==nullptr) return nullptr;
    while(temp->next->next){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

int main(){
    vector<int> nums={2};
    node *head=arr2ll(nums);

    display(head);
    head= delete_tail(head);
    display(head);

    return 0;
}