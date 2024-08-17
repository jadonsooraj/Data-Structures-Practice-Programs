#include <iostream>
#include <stack>
#include <vector>

void PreviousSmallerElement(std::vector<int>& arr) {
    std::vector<int> result; // Initialize result vector with -1
    std::stack<int> st;

    for (int i = 0; i < arr.size(); i++) {
        if(st.empty()) result.push_back(-1);
    
        while (!st.empty() && arr[i] <= st.top()) st.pop();

        result.push_back(st.top());
        st.push(arr[i]);
    }

    std::cout << "Previous Smaller Elements: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return ;
}

int main() {
    std::vector<int> arr = {4, 2, 7, 9, 3, 5};
    PreviousSmallerElement(arr);
    // std::vector<int> previousSmaller = PreviousSmallerElement(arr);

    // std::cout << "Previous Smaller Elements: ";
    // for (int i = 0; i < previousSmaller.size(); i++) {
    //     std::cout << previousSmaller[i] << " ";
    // }
    // std::cout << std::endl;

    return 0;
}