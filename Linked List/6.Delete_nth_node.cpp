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

//Array to LL converter
node* arr2ll(vector<int> &nums){
    node *head= new node(nums[0]);
    node *tail= head;

    for(int i=1; i<nums.size(); i++){
        node *temp= new node(nums[i]);
        tail->next=temp;
        tail=temp;
    }
    return head;
}

//display function
void display(node *head){
    node *temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//Function to delete Kth node
node* deleteNode(node *head, int k){
    int count =0;

    node *temp=head;
    while(count<k){
        temp=temp->next;
        count++;
    }
    node *temp2=temp;
    temp->next=temp->next->next;
    delete temp2;

    return head;
}

int main(){
    vector<int> nums={2,4,6,8,3};
    node* head= arr2ll(nums);
    display(head);

    int k;
    cout<<"Node to delete: ";
    cin>>k;

    head=deleteNode(head,k);
    display(head);

    return 0;
}