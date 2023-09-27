#include<iostream>
using namespace std;
class Bigint{
    int a;
    int b;
    public:
    Bigint(){}
    Bigint(int a, int b){
        this->a=a;
        this->b=b;

    }
    Bigint operator++(){
        Bigint temp;
        temp.a=++a;
        temp.b=++b;
        return temp;

    }
    void display(){
        cout<<a<<" "<<b<<endl;
        
    }
};
int main()
{
Bigint c1(2,3);

c1.operator++();
c1.display();
}