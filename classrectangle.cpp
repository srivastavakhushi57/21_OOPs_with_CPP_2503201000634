#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){
        if(l>=0){
            length=l;
        }
        else{
            length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
        }
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(20);
    cout<<"Area of r1 is : "<<r1.area()<<endl;
    cout<<"Perimeter of r2 is : "<<r1.perimeter()<<endl;
    return 0;
}