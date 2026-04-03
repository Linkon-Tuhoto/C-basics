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
/*#include <iostream>
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
}*/

//Constructor Overloading

/*#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int age;
    Employee();
    Employee(string n, int u);
};
Employee :: Employee(){
    name = "Ticon";
}
Employee ::  Employee(string n, int u){
    name = n;
    age = u;
}
int main(){
    Employee c;
    cout << "My name is " << c.name << endl;
    Employee d("King'ori", 22);
    cout << "My name is " << d.name << " and I am " << d.age << " years old." << endl;
    return 0;
}*/

//Inheritance Example
#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string n);
    void named();
};
class Student : public Person{
    public:
    int age;
    Student(string n, int a);
    void aged();
};
Person :: Person(string n){
    name = n;
}
Student :: Student(string n, int a) : Person(n){
    age = a;
}
void Student :: aged(){
    cout << "My name is " << name << " and I am " << age << "years old." << endl;
}
void Person :: named(){
    cout << "My name is " << name << endl;
}
int main(){
    Person e("King'osh");
    e.named();
    Student f("Mathenge", 25);
    f.aged();
    return 0;
}