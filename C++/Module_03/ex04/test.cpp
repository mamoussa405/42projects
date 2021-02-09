#include <iostream>

using namespace std;

class Parent{
    protected:
        int a;
};

class Parent1: virtual public Parent{
    public:
        Parent1(void){
            cout<<&a<<endl;
        };
};

class Parent2: virtual public Parent{
    public:
        Parent2(void){
            cout<<&a<<endl;
        };
};

class   Child: public Parent1, public Parent2{
    public:
        Child(){
            cout<<Parent1::a<<endl<<Parent2::a<<endl;
        };
};

int main(void)
{
    return 0;
}