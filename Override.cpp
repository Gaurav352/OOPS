#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void func()
    {
        cout<<"Hello1"<<endl;
    }
    virtual void func1(){
        cout<<"HEllo3"<<endl;
    }
};

class Derived : public Base {
public:
    void func() override
    {
        cout<<"HELLO2"<<endl;
    }
    virtual void func1() override {
        cout<<"Hello4"<<endl;
    }
};

class Derived1:public Derived {

    public:
    void func1 () override{
        cout<<"Hello 5"<<endl;
    }

};

int main(){
 	Derived a;
  	a.func();
  	Base b;
  	b.func();

    Base* c=new Base();
    Derived* d=new Derived();
  	c->func();
    d->func();

    Base* e = new Derived();
    e->func();  

    Derived1 obj;
    obj.func1();
    a.func1();
    b.func1();

}