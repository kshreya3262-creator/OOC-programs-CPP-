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
rectangle(){
cout<<"rectangle object destroyed."<<endl;
}
double getLenght() const{
return lenght;
} 
double getWidth() const{
return width;
}
void setLenght(double len){
lenght=len;
}
void setWidth(double wid){
width=wid;
}
double calculateArea() const{
return (lenght * width);
}
double calculatePerimeter() const{
return 2*(lenght + width);
}
};
int main(){
rectangle rect(4.0,40.0);
cout<<"rectangle properties:"<<endl;
cout<<"lenght:"<<rect.getLenght()<<endl;
cout<<"width:"<<rect.getWidth()<<endl;
cout<<"area:"<<rect.calculateArea()<<endl;
cout<<"perimeter:"<<rect.calculatePerimeter()<<endl;
return 0;
}
