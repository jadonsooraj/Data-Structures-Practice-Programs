#include <iostream>
#include <vector>

using namespace std;

//Structure of Node of a LL
struct node{
    public:
    int data;
    node *next;

    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

//Function to convert array to LL
node* arr2ll(vector<int>& arr){
    node* head= new node(arr[0]);
    node* temp1=head;
    for(int i=1; i<arr.size(); i++){
        node* temp2=new node(arr[i]);
        temp1->next=temp2;
        temp1=temp2;
    }
    return head;
}

//function to display LL
void displayLL(node *head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

node* find_middle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

//Main function
int main(){
    vector<int> arr={2,4,3,7,5,3,6};

    node*head= arr2ll(arr);
    cout<<"LL: " ; 
    displayLL(head);

    node* middle_node = find_middle(head);
    cout<<"Middle Node: "<<middle_node->data;

    return 0;

}