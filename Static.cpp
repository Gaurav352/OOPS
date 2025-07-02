#include <bits/stdc++.h>
using namespace std;

class Counter{
    public:
    static int count;
    int maxCount;

    Counter(int maxi){
        count++;
        maxCount=maxi;
    }
    void print(){
    cout<<this->count<<endl;
    }
    static void printCount(){
        cout<<count<< " " <<endl;
    }
    static void printMaxCount(const Counter& c){
        cout<<"maxCount is: "<<c.maxCount<<" "<<count<<endl;
    }
};

int Counter::count=0;


class A{

    public:
    int val;
    A(int val){
        this->val = val;
    }

};

class B{

    public:
    static A a;
    B(){}

};

A B::a = A(12);

int main(){

    Counter c1(2),c2(3);
    Counter::printCount();
    c1.print();

    Counter c3(4),c4(5);
    Counter::printCount();

    Counter::count--;
    Counter::printCount();

    Counter::printMaxCount(c1);
    Counter::printMaxCount(c4);
    c1.printMaxCount(c4);//not good 
    cout<<c1.count<<endl;//not good

    ///class as static member
    cout<<B::a.val<<endl;
    B obj1;
    cout<<obj1.a.val<<endl;


    return 0;
}