#include <bits/stdc++.h>
using namespace std;
class Constructor{
    public :
    int a,b;
    Constructor(int x,int y){
        this->a=x;
        this->b=y;
    }
    //copy constructor
    Constructor(Constructor &copy){
a=copy.a;
b=copy.b;
    }
};
int main(){
Constructor c(4,6);
cout<<c.a<<" "<<c.b<<endl;
Constructor copy=c;
cout<<copy.a<<" "<<copy.b<<endl;
return 0;
}
