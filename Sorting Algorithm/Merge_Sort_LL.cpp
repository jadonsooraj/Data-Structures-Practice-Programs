#include<iostream>
#include<vector>
 
using namespace std;


// node in a linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor with both data and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

//function to convert Array to LL which return the head of LL
Node* arr2ll(vector<int> &nums){
    
    //initialising 'head' node
    Node* head =new Node(nums[0]);
    //initialising a mover pointer which helps in traversing through LL
    Node* mover= head;

    //traversing through Array and converting it into LL
    for(int i=1; i<nums.size();i++){
        Node* temp= new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// Function to merge two sorted linked lists
Node* mergeLL(Node* list1, Node* list2) {
    // Create a dummy node to serve as the head of the merged list
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    // Traverse both lists simultaneously
    while (list1 != nullptr && list2 != nullptr) {
        // Compare elements of both lists and link the smaller node to the merged list
        if (list1->data <= list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        // Move the temporary pointer
        // to the next node
        temp = temp->next; 
    }

    // If any list still has remaining elements, append them to the merged list
    if (list1 != nullptr) {
        temp->next = list1;
    } else {
        temp->next = list2;
    }
    // Return the merged list starting from the next of the dummy node
    return dummyNode->next;
}

// Function to find the middle of a linked list
Node* findMiddle(Node* head){

    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Initializing slow and fast pointers
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// MergeSort
Node* sortLL(Node* head){
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    // Find the middle of the list using the findMiddle function
    Node* middle = findMiddle(head);
    
    // Divide the list into two halves
    Node* right = middle->next;
    middle->next = nullptr;
    Node* left = head;
    
    // Recursively sort the left and right halves
    left = sortLL(left);
    right = sortLL(right);
    
    return mergeLL(left, right);
}

// Function to print the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    cout << endl;
}

main(){
    vector<int> arr1={3,6,2,6,1};
    vector<int> arr2={56,5,3,1,4};

    Node *head1 =arr2ll(arr1);
    Node *head2= arr2ll(arr2);
    
    cout<<"1st LL: ";
    display(head1);
    cout<<"2nd LL: ";
    display(head2);

    //merged LL with head3
    cout<<"Merged LL: ";
    Node *head3= mergeLL(head1, head2);
    display(head3);

    cout<<"sorted LL: ";
    head3= sortLL(head3);
    display(head3);

    return 0;
}

