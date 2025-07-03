#include <iostream>
using namespace std;

class A
{

public:
    int *a;
    int b;
    A(int num)
    {
        cout << "Constructr" << endl;
        a = new int(num);
        this->b = num;
    }
    A(const A &other)
    {
        a = new int(*(other.a));
        b = other.b;
    }

    void print()
    {
        cout << this << " " << this->a << " " << *a << " " << b << endl;
    }
};
int main()
{
    A *a = new A(45);
    A* b = new A(*a);
    a->print();
    b->print();
    *(b->a) = 5;
    a->print();
    b->print();
    return 0;
}
