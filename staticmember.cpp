#include <iostream>
using namespace std;

class Test{
    public:

    int a;
    static int count;

    Test(){
        a=4;
        count++;
    }
    static int getCount(){
        return count;
    }
};
int Test::count=0;
int main(){
    Test t1;
    cout<<t1.count<<endl; //prints 1
    Test t2;
    cout<<t2.count<<endl; //prints 2

    cout<<Test::getCount(); //prints 2
}