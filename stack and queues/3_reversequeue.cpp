
#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &input) {
	// Write your code here
    
    stack<int> Stack;
    while (!input.empty()) {
        Stack.push(input.front());
        input.pop();
    }
    while (!Stack.empty()) {
        input.push(Stack.top());
        Stack.pop();
    }
}