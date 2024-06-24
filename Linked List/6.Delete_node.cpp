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
        node(int data1, node* next1){
            data=data1;
            next=next1;
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
    //handling edge case i.e. only one node in LL
    if(head==nullptr) return head;

    if(k==1){
        node *temp=head;
        head=head->next;
        delete temp;
        cout<<"LL is empty now";
        return head;
    }

    int counter =0;

    node *temp=head;
    node *previous =nullptr;

    while(temp){
        counter++;
        if(counter==k){
            previous->next=previous->next->next;
            delete temp;
            break;
        }
        previous=temp;
        temp=temp->next;
    }

    return head;
}

//function to delete node containing element
node* remove_ele(node *head, int ele){
    //handling edge case i.e. only one node in LL
    if(head==nullptr) return head;

    if(head->data==ele){
        node *temp=head;
        head=head->next;
        delete temp;
        cout<<"LL is empty now";
        return head;
    }


    node *temp=head;
    node *previous =nullptr;

    while(temp){
        if(temp->data==ele){
            previous->next=previous->next->next;
            delete temp;
            break;
        }
        previous=temp;
        temp=temp->next;
    }

    return head;
}

int main(){
    vector<int> nums={2,3,5,3,7,9};
    node* head= arr2ll(nums);
    display(head);

    //remove kth node
    int k;
    cout<<"Node to delete: ";
    cin>>k;
    head=deleteNode(head,k);
    display(head);

    //remove an element
    int ele;
    cout<<"Element to remove: ";
    cin>>ele;
    head=remove_ele(head,ele);
    display(head);

    return 0;
}