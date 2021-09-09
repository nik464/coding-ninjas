#include <iostream>
using namespace std;



int main()
{
    int m=0,n=0;
    cin>>m>>n;
    int **p =new int*[m];  //created double pointer and array which will point to another
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];

        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {

 
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j];
        }
    }


   

  for(int i=0;i<m;i++)
  {
      delete[] p[i];  //delete the array to which p[i] is pointing to
  }
   delete[]p;
   
   }