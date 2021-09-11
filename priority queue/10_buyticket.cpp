#include <queue>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}


int buyTicket(int *arr, int n, int k) {
    // Write your code here
       queue<int> q;
    // Max priority queue 
    priority_queue<int> pq;
    for(int i = 0; i < n; i++) {
        q.push(arr[i]);
        pq.push(arr[i]);
    }
    int count = 0;
    while(!pq.empty()) { 
        if(q.front() == pq.top()) { 
            if(k == 0) {
                return count + 1;
            } 
            else {
                count++; 
                q.pop(); 
                pq.pop(); 
                k--;
            }
        }
        else {
            q.push(q.front()); 
            q.pop();
            if(k == 0) {
                k = q.size() - 1;
            }
            else { 
                k--;
            }
        }
    }
    return count;
}