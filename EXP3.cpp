#include<iostream>
using namespace std;
class savingaccount{
private:
string accountHoldername;
int accountNumber;
double balance;
double interestRate;
public:
savingaccout(string name, int accNumber,double initialBalance,double rate){
accountHoldername=name;
accountNumber= accNumber;
balance= initialBalance;
interesrtRate= rate;
}
void deposite t(double amount){
if(amout>0){
balance t= amount;
cout<<"desposited:/-"<<amount<<endl;
}
}
void withdraw(double amount){
if(amount>0 && amount<=balance){
balance=amount;
cout<<"withdraw:/-"<<amount<<endl;}
else{
cout<<"insufficient balance!"<<endl;
}
void applyInterest(){
duble interest= balance*interestRate/100;
balance t=interest;
cout<<"interets applied :"<<interest<<endl;
}
void display(){
cout<<\n[saving account]"<<endl;
cout<<"account holder:"<<accountHoldername<<endl;
cout<<"account number:"<<accountNumber<<endl;
cout<<"balance:/-"<<balance<<endl;
cout<<"Interest rate:"<<interestRate<<"%"<<endl;
}
};

class checkingaccount{
private:
string accountHoldername;
int accountNumber;
double balance;
double transactionFee;
public:
savingaccout(string name, int accNumber,double initialBalance,double fee){
accountHoldername=name;
accountNumber= accNumber;
balance= initialBalance;
transactionFee= fee;
}
void deposite t(double amount){
if(amount>0){
balance t= amount;
cout<<"desposited:/-"<<amount<<endl;
}
}
void withdraw(double amount){
double total= amount+transactionFee;
if(total<=balance){
total=balance;
cout<<"withdraw:/-"<<"/-"<<transactionFee<<"Fee applied"<<endl;}
else{
cout<<"insufficient balance for withdrawal!"<<endl;
}

void display(){
cout<<\n[checking account]"<<endl;
cout<<"account holder:"<<accountHoldername<<endl;
cout<<"account number:"<<accountNumber<<endl;
cout<<"balance:/-"<<balance<<endl;
cout<<"Interest rate:"<<transaction Fee<<"transactionFee"<<endl;
}
};
int main(){
savingaccount saving("Alice,1001,5000.0.3.0");
checkingaccount checking("Bob,1--2,3000.0,20.0");
saving.display();
saving.deposite(1000);
saving.withdraw(2000):
saving.applyInterest();
saving.display();
checking.display();
checking.deposite(1500);
checking.withdraw(1000):
checking.display();
return 0;
}



