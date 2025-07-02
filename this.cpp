#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int val;
    public:
    A(int val){this->val = val;}
    void print(){
        cout<<this<<" "<<this->val<<endl;
    }
};

int main(){

    A a(23);
    a.print();
    

    return 0;
}