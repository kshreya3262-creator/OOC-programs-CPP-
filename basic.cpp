HELLO WORLD 

#include<iostream>
using namespace std;
int main()
{
cout<<"hello world";
return 0;
}



ADDITION 

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
c= a+b;
cout<<"Addition of a and b:"<<c;
return 0;
}

DIVISION 
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
c= a/b;
cout<<"Division of a and b:"<<c;
return 0;
}

MULTIPLICATION 
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
c= a*b;
cout<<"multiplication of a and b:"<<c;
return 0;
}

SUBSTRACTION 
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
c= a-b;
cout<<"substraction of a and b:"<<c;
return 0;
}

OPERATOR 
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a\n:";
cin>>a;
cout<<"enter b:\n";
cin>>b;
c= a+b;
cout<<"\nAddition of a and b:\n"<<c;
c= a-b;
cout<<"\nsubstraction of a and b:\n"<<c;
c= a*b;
cout<<"\nmultiplication of a and b:\n"<<c;
c= a/b;
cout<<"\ndivision of a and b:\n"<<c;
return 0;
}

XYZ

#include<iostream>
using namespace std;
int main()
{
char letter, digit, special;
cout<<"enter a letter\n";
cin>>letter;
cout<<"you entered a letter:"<<letter<<endl;
cout<<"\n enter a digit";
cin>>digit;
cout<<"\n you have entered a digit:"<<digit<<endl;
cout<<"\n enter a special character";
cin>>special;
cout<<"you entered a special character:"<<special<<endl;
return 0;
}


RECTANGLE AREA N PERIMETER 
#include<iostream>
using namespace std;
class rectangle{
private:
double lenght;
double width;

public:
rectangle(double len,double wid){
lenght = len;
width = wid;
}

double calculateArea() const{
return (lenght * width);
}
double calculatePerimeter() const{
return 2*(lenght + width);
}
};
int main(){
rectangle rect(10,10);
cout<<"area:"<<rect.calculateArea()<<endl;
cout<<"perimeter:"<<rect.calculatePerimeter()<<endl;
return 0;
}


AREA OF CIRCLE
#include<iostream>
using namespace std;
int main()
{
float r,a;
cout<<"enter radius:";
cin>> r;
float const pi=3.14;
a= r*r*pi;
cout<<"the area of circle:"<<a;
return 0;
}


NESTED CLASS
#include<iostream>
using namespace std;
class A{
public:
class B{
private:
int num;
public:
void getData(int n){
num=n;
}
void putData(){
cout<<"the number is:"<<num;}
};
};
int main(){
cout<<"nexted class in c++"<<endl;
A::B obj;
obj.getData(10);
obj.putData();
return 0;
}
