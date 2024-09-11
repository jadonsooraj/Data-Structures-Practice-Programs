// Return the sub-Array with Maximum Sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to display an array
void display(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Function to find maximum sum subarray using "Kadane's Algorithm"
int maximum_sum(vector<int> arr){
    int sum=0, maxi=INT_MIN;
    
    for(int i=0; i<arr.size(); i++){
        sum=sum+arr[i];

        if(sum>maxi) maxi=sum;

        if(sum<0) sum=0;
    }
    return maxi;
}

//Main Function
int main() {
    
    //Input Array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements: ";
    display(arr);

    cout<<"Ans: "<<maximum_sum(arr);
    
    
    
    return 0;
}