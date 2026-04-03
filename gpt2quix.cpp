//Basic class and function example
/*#include <iostream>
using namespace std;
class Student{ 
    public:
    string name;
    void displayName();
};
void Student :: displayName(){
    cout << "My name is " << name << endl;
}
int main(){
    Student a;
    a.name = "Kang'ethe";
    a.displayName();
    return 0;
} */


//Default Constructor Example
#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    Car(string x);
    void displayBrand();
};
Car :: Car(string x){
    brand = x;
}
void Car :: displayBrand(){
    cout << "My car brand is " << brand << endl;
}
int main(){
    Car b("Lexus");
    b.displayBrand();
    return 0;
}