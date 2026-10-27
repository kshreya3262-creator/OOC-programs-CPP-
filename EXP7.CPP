MULTIPLE INHERITANCE 

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
class dog
{
public:
dog()
{
cout<<"This animal is dog.\n";
}
};
class cat: public animal,dog
{
public:
cat(){
cout<<"This animal is a cat.\n";
}
};
int main(){
cat obj1;
return 0;
}


HYBRID INHERITANCE 
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
class bird : public dog,cat
{
public:
bird(){
cout<<"This is a bird.";
}
};
int main(){
animal obj1;
dog obj2;
cat obj3;
bird obj4;
return 0;
}
