#include <bits/stdc++.h>

using namespace std;
class Hero{
    int health;
    public:
    char level;
    //parametersid constructor this is class object stores the value of input object;
    //when we call parametrsied contsructor the dfault construcotor is died up ;
        Hero(char level){
        this->health=health;
        this->level=level;
    }
    //copy constructor and pass by reference;
    // Hero(Hero &temp){
    //     cout<<"function is called"<<endl;
    //     this->health=temp.health;
    // }
    void setHealth(int h){
        health=h;
    }
    //to acces and  a set private memebers of class;
    int getHealth(){
        return health;
    }
};
int main(){
Hero sahil('A');
//sahil.setHealth(70);
Hero alesh(sahil);
cout<<alesh.level<<endl;
alesh.level='C';
cout<<sahil.level<<endl;
return 0;
}