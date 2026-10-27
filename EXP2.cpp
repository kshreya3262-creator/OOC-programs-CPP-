#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
int real;
int imaginary;
complex()
{
real=0;
imaginary=0;
}
Complex(int r,int i)
{
real=r;
imaginary=i;
}
Complex addComplexNumber(Complex c1, Complex c2)
{
Complex res;
res.real= c1.real + c2.real;
res.imaginary= c1.imaginary + c2.imaginary;
return res;
}
};
int main()
{
Complex c1(4,5);
cout<<"complex number 1:"<<c1.real<<"+i"<<c1.imaginary<<endl;
Complex c2(8,9);
cout<<"complex number 2:"<<c2.real<<"+i"<<c2.imaginary<<endl;
Complex c3;
c3=c3.addComplexNumber(c1,c2);
cout<<"sum of complex numbers"<<c3.real<<"+i"<<c3.imaginary;
cout<<endl;
Complex A(2,7);
cout<<"complex number 1;"<<A.real<<"+i"<<A.imaginary<<endl;
Complex B(10,6);
cout<<"complex number 2;"<<B.real<<"+i"<<B.imaginary<<endl;
Complex c;
c= c.addComplexNumber(A,B);
cout<<"sum of complex number:"<<c.real<<"+i"<<c.imaginary<<endl:
}
