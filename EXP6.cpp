#include<iostream>
using namespace std;
class student{
public:
char name[50];
int roll_no;
student(){

cout<<"Enter student Name:";
cin>>name;

cout<<"Enter roll no:";
cin>>roll_no;
}
};
class marks: public student
{
public:
int sub1,sub2,sub3;
marks(){
cout<<"enter marks of subject 1:\n";
cin>>sub1;
cout<<"enter marks of subject 2:\n";
cin>>sub2;
cout<<"enter marks of subject 3:\n";
cin>>sub3;
}
void display(){
cout<<"\nstudent name:"<<name;
cout<<"\nroll_no:"<<roll_no;
cout<<"\nmarks of subject 1:"<<sub1;
cout<<"\nmarks of subject 2:"<<sub2;
cout<<"\nmarks of subject 3:"<<sub3;
}
};

int main(){
marks obj1;
obj1.display();
return 0;
}





SINGLE INHERITANCE 

#include<iostream>
using namespace std;
class animal
{
public: 
animal()
{
cout<<"This is animal.\n";
}
};
class dog: public animal
{
public:
dog()
{
cout<<"This animal is dog.\n";
}
};
int main(){
dog obj1;
return 0;
}


MULTILEVEL INHERITANCE 

#include<iostream>
using namespace std;
class animal
{
public: 
animal()
{
cout<<"This is animal.\n";
}
};
class dog: public animal
{
public:
dog()
{
cout<<"This animal is dog.\n";
}
};
class cat: public dog
{
public:
cat(){
cout<<"This animal is a cat.\n";
}
};
int main(){
dog obj1;
cat obj2;
return 0;
}


HIERARCHICAL INHERITANCE 

#include<iostream>
using namespace std;
class animal
{
public: 
animal()
{
cout<<"This is animal.\n";
}
};
class dog: public animal
{
public:
dog()
{
cout<<"This animal is dog.\n";
}
};
class cat: public animal
{
public:
cat(){
cout<<"This animal is a cat.\n";
}
};
int main(){
dog obj1;
cat obj2;
return 0;
}
