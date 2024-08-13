#include <iostream>
#include <stack>
#include <vector>

std::vector<int> findNextGreaterElement(const std::vector<int>& arr) {
    std::vector<int> result(arr.size(), -1); // Initialize result vector with -1
    std::stack<int> st;

    for (int i = 0; i < arr.size(); i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            result[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return result;
}

int main() {
    std::vector<int> arr = {4, 2, 7, 9, 3, 5};
    std::vector<int> nextGreater = findNextGreaterElement(arr);

    std::cout << "Next Greater Elements: ";
    for (int i = 0; i < nextGreater.size(); i++) {
        std::cout << nextGreater[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}