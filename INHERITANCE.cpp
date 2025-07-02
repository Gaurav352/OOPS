#include <bits/stdc++.h>
using namespace std;

class Pizza{
    bool sauce=false;
    bool cheese=false;
    bool base=false;
    public:
    Pizza (){

        cout<<"Constructor-1 called"<<endl;
    }
    public:
    void set(){

        sauce=true;
        cheese=true;
        base=true;
        cout<<"Baking base with sauce and cheese"<<endl;
    }
};

//single
class type1:Pizza{
    bool onion;
    bool tomato;
    public:
    type1 (){
        cout<<"Constructor-2 called"<<endl;
        onion=false;
        tomato=false;
    }
    
    void bake(){
        set();
        onion=true;
        tomato=true;
        cout<<"Baked type1"<<endl;
    }
};
//single
class type2:Pizza{
    bool paneer;
    type2(){
        paneer=false;
    }
    void bake(){
        paneer=false;
        cout<<"Baked type2"<<endl;
    }
};


//multi-level
class extraCheese:public type1{
    public:
    bool present;
    extraCheese(){
        cout<<"Constructor-3 called"<<endl;
        present=true;
    }
    void bakeFast(){
        bake();
        cout<<"Adding extra cheese"<<endl;
    }
};

//multiple
//syntax:
// class Hybrid:public class1,public class1{};

//ambiguity and virtual 
class grand{
    public:
    void show(){
        cout<<"Grand class"<<endl;
    }
};
class parent1:virtual public grand {};
class parent2:virtual public grand {};

class child:public parent1,public parent2 {};

int main(){


    //single
    type1 p1;
    p1.bake();


    //multilevel
    extraCheese pizza1;
    pizza1.bakeFast();


    //virtual 
    child obj;
    obj.show();


    return 0;
}
