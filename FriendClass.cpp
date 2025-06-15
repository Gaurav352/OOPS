#include <bits/stdc++.h>
using namespace std;

class Box{
    private:
    int length;

    protected:
    int width;
    
    public:
    Box (int l,int w){
        length=l;
        width=w;
    }

    friend bool areEqual(const Box& box1,const Box& box2);
    friend class displayBox;
};

bool areEqual(const Box& box1,const Box& box2){
    return box1.length==box2.length && box2.length==box2.width;
}

class displayBox{
    public:
    void showDimensions(const Box& b){
        cout<<b.length << " " << b.width<<endl; 
    }
};

int main(){

    Box box1(5,10);
    Box box2(6,10);


    displayBox displayBox1;

    displayBox1.showDimensions(box1);
    displayBox1.showDimensions(box2);

    areEqual(box1,box2);

    return 0;
}
