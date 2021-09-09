#include<bits/stdc++.h>
using namespace std;

class Polynomial
{
    int *degCoeff;
    int capacity;
    

    Polynomial()
    {
      degCoeff= new int[6];
      capacity= 5;
    }

    Polynomial(int capacity)
    {
        this->degCoeff= new int[capacity+1];
        this->capacity=capacity;
    }

    void Setcoeff( int d ,int coefficient)
    {
        if(d>capacity)
        {
            int*newdeg= new int[d+1];
            int newcapacity=d;

            for(int i =0;i<=capacity;i++)
            {newdeg[i]=degCoeff[i];}
            
            this->degCoeff=newdeg;
            this->capacity= newcapacity;
            degCoeff[d]=coefficient;

        }
        else
        { degCoeff[d]=coefficient;
        }

    }


    Polynomial(Polynomial &d)   //another polynomial
    {
       int* newdeg= new int[d.capacity +1];
       for(int i=0;i<d.capacity;i++)
        newdeg[i]= d.degCoeff[i];   //polynomial

       this->degCoeff= newdeg;
       this->capacity=d.capacity;

    }


    Polynomial operator+(Polynomial const& P2)
    {
        int newcapacity= max( this->capacity, P2.capacity);
        Polynomial P3(newcapacity);

        for(int i=0;i<newcapacity;i++)
        {
            if(i<=capacity && i<=P2.capacity)
            {
                P3.degCoeff[i]= this->degCoeff[i] + P2.degCoeff[i];

            }

            else if(i<=capacity)
            {
                P3.degCoeff[i]=this->degCoeff[i];

            }

            else
              P3.degCoeff[i]=P2.degCoeff[i];

                   
          return P3;

        }    
    }
    
    Polynomial operator*(Polynomial  & P2)
    {
        int newcapacity= this->capacity + P2.capacity;
        Polynomial P3(newcapacity);

        for(int i=0;i<capacity;i++)
        {
            for(int j=0;j<P2.capacity;j++)
            {
                P3.degCoeff[i+j]=degCoeff[i]+P2.degCoeff[j];
            }
        }

        return P3;


    }
    
    void Print()
    {
     for(int i=0;i<this->capacity;i++)
     {
         if(degCoeff[i]!=0)
         cout<<degCoeff[i]<<"x"<<i;
     }

     
    }
    

};