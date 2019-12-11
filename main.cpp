#include <iostream>
#include "Stack.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    Stack<int> stack;
    int a;
    for (int i; i<=3; i++){
        cin>>a;
        stack.push(a);
    }
    cout<<stack.size();
    stack.print();



    return 0;
}