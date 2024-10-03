#include <iostream>
#include <vector>

using namespace std;

// Function to perform bubble sort in ascending order
int bubbleSortAscending(vector<int>& arr) {
    int n = arr.size();
    int count=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    return count;
}

// Function to perform bubble sort in descending order
int bubbleSortDescending(vector<int>& arr) {
    int n = arr.size();
    int count=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                count++;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return count;
}


int main() {
    // Input the array size
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create a copy for sorting in ascending order
    vector<int> arrAsc = arr;
    // Create a copy for sorting in descending order
    vector<int> arrDesc = arr;

    // Perform bubble sort for ascending order
    cout<<"CountAsc: "<<bubbleSortAscending(arrAsc)<<endl;
    cout<<"CountDesc: "<<bubbleSortDescending(arrDesc)<<endl;

    return 0;
}
