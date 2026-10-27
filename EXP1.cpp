#include<iostream>
using namespace std;
class student{
private:
char name[50];
int roll_no;
float marks;
public:
void inputDetails(){

cout<<"Enter student Name:";
cin>>name;

cout<<"Enter roll_no:";
cin>>roll_no;

cout<<"Enter marks:";
cin>>marks;
}

void displayDetails() {
cout<<"student name:"<<name<<endl;
cout<<"rol_no:"<<roll_no<<endl;
cout<<"makrs:"<<marks<<endl;
}
};
int main(){
student studentObj;
studentObj.inputDetails();
cout<<"\n student details:\n";
studentObj.displayDetails();
return 0;
}
