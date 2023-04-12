#include <bits/stdc++.h>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char *name;
    char level;

static int timetocomplete;
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
~Hero(){
    cout<<"Destructor called manually";
}
static int random(){
    return timetocomplete;
}
};

int Hero::timetocomplete=5;

int main() {


    //Static
    //automaticallycalled distructor;
    Hero a;
//cout<<Hero::timetocomplete<<endl;
cout<<Hero::random()<<endl;
    //Dynamic
    //desturctor called manually;
    Hero *b = new Hero();
    b->timetocomplete=10;
    cout<<b->timetocomplete<<endl;
    //     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     //hero2.print();
//    //********************* //copy asignment operator//*******************************
// hero2=hero1;
//     //hero1 = hero2;

//    // hero1.print();

//     hero2.print();


    return 0;
}