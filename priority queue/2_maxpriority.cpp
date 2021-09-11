
#include<vector>
#include <iostream>
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
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
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


class PriorityQueue {
    // Declare the data members here
 vector<int> pq;
   public:
    PriorityQueue() {
        // Implement the constructor here
      
    }

    /**************** Implement all the public functions here ***************/
    
    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;

    }

    void insert(int element) {
        // Implement the insert() function herep
        pq.push_back(element);
        int childmax= pq.size()-1;
        
       while(childmax>0)
       {
            int parentindex= (childmax-1)/2;
        
          if(pq[childmax]>pq[parentindex])
          {
              int temp=pq[parentindex];
              pq[parentindex]=pq[childmax];
              pq[childmax]=temp;
          }
        
        else
        break;
           
         
        
        childmax=parentindex;
       }
        
        }
    
    

    int getMax() {
        // Implement the getMax() function here
         if(isEmpty())
        {
            return 0;
        }
        return pq[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty())
            return 0;
        
        
        
         int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        
        
        int parentindex=0;
        
        int leftindex=2*parentindex+1;
        int rightindex=2*parentindex+2;
        
        while(leftindex<pq.size())
        {
            int maxindex=parentindex;
            
            if(pq[maxindex]<pq[leftindex])
                maxindex=leftindex;
            
            if(rightindex<pq.size() && pq[maxindex]<pq[rightindex])
                maxindex=rightindex;
            
            if(maxindex==parentindex)
                break;
            
            int temp=pq[parentindex];
            pq[parentindex]=pq[maxindex];
            pq[maxindex]=temp;
            
            
            parentindex=maxindex;
              leftindex=2*parentindex+1;
            rightindex=2*parentindex+2;
            }
        
        return ans;
        
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

};