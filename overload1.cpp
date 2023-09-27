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
    complex operator+(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }
    void display(){
        cout<<a<<"+"<<"i"<<b<<endl;
        
    }
};
int main()
{
complex c1(2,3);
complex c2(3,4);
complex c3;
c3=c1+c2;
c3.display();
}