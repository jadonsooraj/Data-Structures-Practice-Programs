#include<iostream>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//stack data structure
class Stack {
private:
    int arr[100]; // Array to store elements
    int topindex; // Index of the top element

public:
    Stack() {
        topindex = -1; // Initialize top to -1 (empty stack)
    }

    bool isEmpty() {
        return (topindex == -1); // Check if stack is empty
    }

    bool isFull() {
        return (topindex == 100 - 1); // Check if stack is full
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push element." << endl;
            return;
        }
        arr[++topindex] = value; // Increment top and add element to stack
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop element." << endl;
            return;
        }
        topindex--; // Decrement top to remove element from stack
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[topindex]; // Return the top element of the stack
    }
};

//Queue data structure
class Queue {
private:
    int arr[100]; // Array to store elements
    int front; // Index of the front element
    int rear; // Index of the rear element

public:
    Queue() {
        front = -1; // Initialize front to -1 (empty queue)
        rear = -1; // Initialize rear to -1 (empty queue)
    }

    bool isEmpty() {
        return (front == -1 && rear == -1); // Check if queue is empty
    }

    bool isFull() {
        return (rear == 100 - 1); // Check if queue is full
    }

    void push(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue element." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0; // Set front to 0 for the first element
        }
        arr[++rear] = value; // Increment rear and add element to queue
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue element." << endl;
            return;
        }
        if (front == rear) {
            front = -1; // Reset front and rear to -1 for an empty queue
            rear = -1;
        } else {
            front++; // Increment front to remove element from queue
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front]; // Return the front element of the queue
    }
};

int main(){
    Stack st;

    st.push(4);
    st.push(53);
    st.push(42);

    cout<<"Top element of stack: "<<st.top()<<endl;
    cout<<"Top element of stack: "<<st.top();

    return 0;
}