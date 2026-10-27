#include<iostream>
using namespace std;
class payment{
public:
virtual void pay(){
cout<<"payment made by cash"<<endl;
}
};
class creditcard: public payment{
void pay() override{
cout<<"payment made by credit card"<<endl;
}
};
class upipayment: public payment{
void pay() override{
cout<<"payment done by upi app"<<endl;
}
};
int main()
{
payment*p;
creditcard c;
p=&c;
p->pay();
upipayment u;
p=&u;
p->pay();
return 0;
}
