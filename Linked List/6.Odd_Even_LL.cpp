//The first node is considered odd, and the second node is even, and so on.

//Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

//Note that the relative order inside both the even and odd groups should remain as it was in the input.

//Input: head = [1,2,3,4,5]
//Output: [1,3,5,2,4]

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

//M-1 brute force using extra array, Time-O(n), space-O(n)
node* Odd_Even_Using_Arr(node *head){
    
    //edge case
    if(head==nullptr || head->next==nullptr) return head;

    vector<int> arr;
    node* temp=head;

    //iterating through odd nodes
    while(temp && temp->next){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    //if last node is odd
    if(temp) arr.push_back(temp->data);

    //iterating through even node
    temp=head->next;
    while(temp && temp->next){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    //if last node is even
    if(temp) arr.push_back(temp->data);

    head=arr2ll(arr);
    
    return head;
}

//M-2 Optimised without using extra space, Time-O(n), space-O(1)
node* odd_even(node* head){
    //edge case
    if(head==nullptr || head->next==nullptr) return head;

    node *odd=head;
    node *even=head->next;
    node *evenhead=head->next;

    while(even && even->next){
        odd->next=odd->next->next;
        even->next=even->next->next;
        
        odd=odd->next;
        even=even->next;
    } 
    odd->next=evenhead;

    return head;
}

//main function
int main(){
    
    vector<int> nums = {1,2,3,4,5};
    //converting Array to LL
    node* head=  arr2ll(nums);
    cout<<"input: ";
    display(head);

    //using BruteForce
    node *head1=Odd_Even_Using_Arr(head);
    cout<<"Brute Force output: ";
    display(head1);

    //Optimised
    node *head2=odd_even(head);
    cout<<"Optmised output: ";
    display(head2);

    return 0;
}