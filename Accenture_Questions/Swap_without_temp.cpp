#include <iostream>
using namespace std;

int main() {
    int a=3;
    int b=4;

    a=a^b;
    b=a^b;
    a=a^b;
    std::cout << "a: " << a<<endl<< "b: "<<b;
    return 0;
}