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

//function to insert head
node* insert_head(node* head, int ele){
    node *temp= new node(ele, head);
    return temp;
}

//function to insert at tail;
node* insert_tail(node* head, int ele){
    //edge case when LL is empty
    if(head==nullptr){
        return new node(ele);
    }
    node *temp= new node(ele);
    node *mover=head;
    while(mover->next){
        mover=mover->next;
    }
    mover->next=temp;
    mover=temp;
    return head;
}

//function to insert at kth position
node* insert(node* head, int k, int ele){
    //if LL is empty
    if(head==nullptr){
        return new node(ele);
    }
    //insert at head
    if(k==1){
        return new node(ele,head);
    }
    node* mover=head;
    int counter=0;
    
    while(mover){
        counter++;
        if(counter==k-1){
            node* temp= new node(ele);
            temp->next=mover->next;
            mover->next=temp;
            break;
            
        }
        mover=mover->next;
    }
}

//Insert before a "Val"

//write a function

int main(){
    vector<int> nums={2,3,5,3,7,9};
    node* head= arr2ll(nums);
    display(head);

    int ele;
    cout<<"Enter element to insert at head: ";
    cin>>ele;
    head=insert_head(head, ele);
    display(head);

    int ele1;
    cout<<"Enter element to insert at tail: ";
    cin>>ele1;
    head=insert_tail(head, ele1);
    display(head);

    int ele2,k;
    cout<<"Enter position to insert: ";
    cin>>k;
    cout<<"\nEnter element to insert at Position: ";
    cin>>ele2;
    head=insert(head, k , ele2);
    display(head);

    return 0;
}