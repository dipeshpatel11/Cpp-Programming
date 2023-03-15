#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// empty
// Test whether container is empty (public member function )
// size
// Return size (public member function )
// top
// Access next element (public member function )
// push
// Insert element (public member function )
// emplace 
// Construct and insert element (public member function )
// pop
// Remove top element (public member function )
// swap 
// Swap contents (public member function )

int main(){

    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    stack.push(26);
    stack.push(27);

    stack.pop();
    stack.pop();
  
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
    cout<<endl;
    stack.push(25);
    stack.push(26);
    stack.push(27);

    cout <<stack.empty()<<endl;
    cout <<stack.size();
    return 0;
}