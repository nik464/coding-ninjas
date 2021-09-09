#include<iostream>
using namespace std;

int count(int n){

    static int counts =0;
    

    if(n==0)
    {
        return 1;
    }
    if(n>0)
    {
        counts++;
        count(n/10);
    }
 return counts;
}


