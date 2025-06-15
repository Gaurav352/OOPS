#include <bits/stdc++.h>
using namespace std;

class Pizza{
    bool sauce=false;
    bool cheese=false;
    bool base=false;
    public:
    void set(){
        sauce=true;
        cheese=true;
        base=true;
        cout<<"Baking base with sauce and cheese"<<endl;
    }
};
class type1:Pizza{
    bool onion;
    bool tomato;
    public:
    type1 (){
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

int main(){

    type1 p1;
    p1.bake();

    return 0;
}
