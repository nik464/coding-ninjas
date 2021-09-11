#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}



void heapSort(int arr[], int n) {
    // Write your code
    for(int i=1;i<n;i++)
    {
        int childindex=i;
        
        while(childindex>0)
        {
            int parentindex= (childindex-1)/2;
            
            if(arr[parentindex]>arr[childindex])
            {
                int temp=arr[parentindex];
                
                arr[parentindex]=arr[childindex];
                arr[childindex]=temp;
            }
            
            
            else
                break;
        
         childindex=parentindex;
    }
    }
    
    
    
    int size=n;
    
    while(size>1)  //reverse
    {
        int temp=arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=temp;
        
        
        size--;
        
        int parentindex=0;
        int leftindex=2*parentindex+1;
        int rightindex=2*parentindex+2;
        
        
        while(leftindex<size)
        {
            
            int minindex=parentindex;
            if(arr[minindex] > arr[leftindex]) {
		  	 minindex = leftindex;
			}
			if(rightindex < size && arr[rightindex] < arr[minindex]) {
				minindex = rightindex;
			}
			if(minindex == parentindex) {
				break;
			}
			int temp = arr[minindex];
			arr[minindex] = arr[parentindex];
			arr[parentindex] = temp;

			parentindex = minindex;
			leftindex = 2 * parentindex + 1;
			rightindex = 2 * parentindex + 2;
        }
        
        
    }
    
}