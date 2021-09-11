#include <iostream>
#include <vector>
#include <climits>
using namespace std;



int main() {
    PriorityQueue pq;

    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}
#

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
        if(isEmpty()) {
			return 0;		// Priority Queue is empty
		}
		
        
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        
        
        int parentindex=0;
        int leftindex= 2*parentindex +1;
        int rightindex= 2*parentindex+2;
        
        while(leftindex<pq.size())
        {
            int minindex=parentindex;
            if(pq[minindex]>pq[leftindex])
             minindex=leftindex;
            
            if(rightindex<pq.size()  && pq[minindex]>pq[rightindex])
                minindex=rightindex;
            
            if(minindex==parentindex)
                break;
            
            
           int temp=pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;
            
            
            parentindex=minindex;
            leftindex=2*parentindex+1;
            rightindex=2*parentindex+2;
            } 
        
        return ans;
    }
};