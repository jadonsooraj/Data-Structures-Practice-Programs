#include<iostream>
#include<vector>
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

//delete tail function
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
    vector<int> nums={3};
    node *head=arr2ll(nums);

    display(head);
    head=delete_head(head);
    display(head);

    return 0;
}