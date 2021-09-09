#include<bits/stdc++.h>
using namespace std;

class Priorityqueue
{
vector<int> pq;
public:
Priorityqueue()
{}


bool isEmpty()
{
    return pq.size()==0;

}

int getsize()
{
    return pq.size();
}

int getMax()
{ if(isEmpty())
   return 0;

return pq[0];
}

void insert(int element){
    pq.push_back(element);

    int childmax= pq.size()-1;

    while(childmax>0)
    {
      int  parentindex= (childmax-1)/2;
      if(pq[childmax]>pq[parentindex])
      {
          int temp=parentindex;
          parentindex=childmax;
          childmax=temp;


      }

      else
      break;

        childmax=parentindex;
    }

    }

int removemax()
{   
    if(isEmpty())
    return 0;

    int ans=pq[0];
    pq[0]=pq.size()-1;
    pq.pop_back();

    int parentindex=0;
    int leftindex=2*parentindex+1;
    int rightindex=2*parentindex+2;

    while(leftindex<pq.size())
    {    int maxindex=parentindex;
         if(pq[leftindex]>pq[maxindex])
         maxindex=leftindex;

         if(rightindex<pq.size()&& pq[rightindex]>pq[maxindex])
         maxindex=rightindex;

         if(maxindex==parentindex)
          break;


         int temp=pq[parentindex];
         pq[parentindex]=pq[maxindex];
         pq[maxindex]=temp;

   


         parentindex=maxindex;

         leftindex=2*parentindex+1;
         rightindex-2*parentindex+2;
    }
    return ans;
    }

};