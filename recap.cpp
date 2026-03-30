/*#include <iostream>
using namespace std;
class Employee{
    string name;
    int salary;
    public:
    Employee();
    Employee(string, int);
    void display();
};
Employee :: Employee(string n, int s){
    this->name = n;
    this->salary = s;
    cout << "Parameterized constructor called" << endl;
}
Employee :: Employee(){
    name = "Jayden";
    salary = 30000;
}
void Employee :: display(){
    cout << "My name is " << name << " and I earn ksh." << salary << endl;
}
int main(){
    Employee e;
    e.display();
    Employee f("Kange'the", 50000);
    f.display();
    return 0;
}*/

#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string);
    void displayName();
};
class Employee : public Person {
    int salary;
    public:
    Employee(int, string);
    void displaySalary();
};
Employee :: Employee(int s, string n): Person(n){
    salary = s;
}
Person :: Person(string n){
    name = n;
}
void Employee :: displaySalary(){
    cout << "My name is " << name << " and I earn ksh " << salary << endl;
}
void Person :: displayName(){
    cout << "My name is " << name << endl;
}
int main (){
    Employee g(100000, "Kang'ethe");
    g.displayName();
    g.displaySalary();
    return 0;
}