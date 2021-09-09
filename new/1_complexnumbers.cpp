#include<bits/stdc++.h>
using namespace std;


class ComplexNumbers{

public:
int real;
int imaginary;

ComplexNumbers(int real, int imaginary)
{
this->real=real;
this->imaginary=imaginary;
}

void multiply(ComplexNumbers c2)
{
    int a = real * c2.real;
    int b = imaginary * c2.imaginary;
    int c = real * c2.imaginary;
    int d=  imaginary *c2.real;

    real=a-b;
    imaginary=c+d;

}

void print()
{
    cout<<real<<" + "<<'i' <<imaginary;
}

};