#include <iostream>
using namespace std;

double area(double side){
    cout<<"square: "<<endl;
    return side*side;
}
double area(int length,int breadth){
    cout<<"rectangle: "<<endl;
    return length*breadth;
}
double area(int radius){
    cout<<"circle: "<<endl;
    return 3.14*radius*radius;
}

int main(){
    cout<<area(3.44)<<endl;
    cout<<area(4,6)<<endl;
    cout<<area(10)<<endl;

    return 0;
}