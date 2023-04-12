// #include <bits/stdc++.h>

// using namespace std;
// class Human{
//     string name;
//     int age;
//     public:
//     void setage(int a){
//         this->age=a;
//     }
//     int getage(){
//         return age;
//     }

// };a
// class Male:public Human{

// public:
// string colour;
// void setcolour(string col){
//     this->colour=col;
// }

// };


// int main(){
// Male sahil;
// sahil.setage(45);
// sahil.setcolour("blue");
// cout<<sahil.getage()<<endl;
// return 0;
// }



//**********************************************multipale inheritance**************************************
//  #include <bits/stdc++.h>
 
//  using namespace std;
//   class Animal{
//     public:
//     void bark(){
//         cout<<"barking"<<endl;
//     }
//  };
// class Human{
//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };

// class hybrid:public Human,public Animal{

// };
//  int main(){

// hybrid b;
// b.speak();
// b.bark();
//  return 0;
//  }

 //**********************************************operator overloading**************************************
 #include <bits/stdc++.h>
 
 using namespace std;
 class B{
public :
int a;
int b;
void operator+ (B &obj){
    int v1=this->a;
    int v2=obj.a;
    cout<<v2-v1<<endl;
}
 };
 int main(){
    B x,y;
x.a=3;
y.a=4;
x+y; 

 return 0;
 }