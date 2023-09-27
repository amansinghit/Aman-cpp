#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(){}
    complex(int a, int b){
        this->a=a;
        this->b=b;

    }
    complex operator++(){
        complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;

    }
    void display(){
        cout<<a<<"+"<<"i"<<b<<endl;
        
    }
};
int main()
{
complex c1(2,3);

c1.operator++();
c1.display();
}