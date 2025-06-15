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
    static void printCount(){
        cout<<count<< " " <<endl;
    }
    static void printMaxCount(const Counter& c){
        cout<<"maxCount is: "<<c.maxCount<<endl;
    }
};

int Counter::count=0;


int main(){

    Counter c1(2),c2(3);
    Counter::printCount();

    Counter c3(4),c4(5);
    Counter::printCount();

    Counter::count--;
    Counter::printCount();

    Counter::printMaxCount(c1);
    Counter::printMaxCount(c4);

    return 0;
}