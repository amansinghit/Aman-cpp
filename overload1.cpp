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
    Bigint operator+(Bigint c){
        Bigint temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }
    void display(){
        cout<<a<<"  "<<b<<endl;
        
    }
};
int main()
{
Bigint c1(2,3);
Bigint c2(3,4);
Bigint c3;
c3=c1+c2;
c3.display();
}
