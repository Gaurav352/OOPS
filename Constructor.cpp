#include <bits/stdc++.h>
using namespace std;

//default
class Toy{
    int val;
    public:
    Toy(){
        val=1;
    }
    explicit Toy(int num){
        val=num;
    }

    int getVal(){
        return this->val;
    }
    void updateVal(int num){
        this->val = num;
    }
    ~Toy(){
        cout<<"destuctor"<<endl;
    }
};

//parameterized
class Character{
    public:
    int attack,defence;
    Character(int num1,int num2){
        attack=num1;
        defence=num2;
    }

    Character(Character& temp){

        this->attack=temp.attack;
        this->defence=temp.defence;
    }
    ~Character(){
        cout<<"character class destructor"<<endl;
    }

    void print(){
        cout<<attack<<" "<<defence<<endl;
    }


};



int main(){

    Toy t1,t2;
    t2.updateVal(5);
    cout<<t1.getVal()<<" "<<t2.getVal()<<endl;

    Character gaurav(5,10);
    gaurav.print();


    //copy-->Deep copy
    Character ganesh=gaurav;
    gaurav.print();
    ganesh.print();
    

    cout<<"COPY CONS"<<endl;
    Character yadav(gaurav);
    yadav.print();
    gaurav.attack=12;
    gaurav.defence=36;
    gaurav.print();
    yadav.print();

    Character* ch1=new Character(1,2);
    Character* ch2(ch1);
    ch1->print();
    ch2->print();
    ch1->attack=5;
    ch1->print();
    ch2->print();

    //explicit;
    // Toy t3=5;
    // cout<< t3.getVal() << endl;
    

    return 0;
}