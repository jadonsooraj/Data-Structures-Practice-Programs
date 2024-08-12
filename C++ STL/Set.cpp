//i want to know whether array contains duplicates using set
#include <iostream>
#include <vector>
#include <set>

int main() {
   std::vector<int> arr={1,1,3,2};
   std::set<int> st;

   for(int num: arr) {
    if(st.find(num)==st.end()) st.insert(num);
    else {
        std::cout<<"Array contains duplicates";
        return 0;
   }
   }

    std::cout<<"Set: ";
   for(auto& num : st) {
        std::cout << num << ' ';
    }

    return 0;
}