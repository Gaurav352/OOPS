#include <bits/stdc++.h>
using namespace std;

class Testing{
    public:
    void test(){
        cout<<"testing-1"<<endl;
    }
    void test(string s){
        cout<<"testing-2"<<endl;
    }

};

class Greet{
    public:
    void sayHello(){
        cout<<"Hello"<<endl;
    }
    void sayHello(string greeting){
        cout<<"Hello 2"<<endl;
    }
    int sayHello(int n){
        cout<<"Hello 3"<<endl;
        return n;
    }
};

class B{
    public:
    int a;

    void operator- (B &obj){
        cout<<"Here "<<this->a * obj.a<<endl;
    }
    void operator() (){
        cout<<"Gaurav"<<endl;
    }
};

//operator overloadingg

class Complex{
    int real;int imag;
    public:
    Complex(int real,int imag){
        this->real = real;
        this->imag = imag;
    }
    void print(){
        cout<<this->real<<" "<<this->imag<<endl;
    }
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real,
        imag + obj.imag);
    }
};

int main(){

    //func overload
    Greet A;
    A.sayHello();


    //operator overload
    B obj1;B obj2;
    obj1.a=3;
    obj2.a=5;
    obj1-obj2;
    obj1();



    Testing t;
    t.test();
    t.test("12");

    Complex c1(14,8);Complex c2(8,4);
    Complex c3 = c1+c2;
    c3.print();

}