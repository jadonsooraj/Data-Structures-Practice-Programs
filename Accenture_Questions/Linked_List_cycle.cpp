#include<iostream>
#include<vector>

using namespace std;

struct node{
    public:
    int data;
    node* next;

    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

//function to display LL
void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

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

bool detectLoop(node *head) {
        node *fast=head;
        node *slow=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        return false;
}

main(){
    vector<int> arr={3,2,0,-4};
    node* head=arr2ll(arr);
    
    node* temp=head;
    while(temp->next!=nullptr) temp=temp->next;

    temp->next=head->next;
    
    if(detectLoop(head)) cout<<"Has Loop";
    else cout<<"No Loop";

    return 0;
}