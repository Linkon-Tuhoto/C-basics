#include <iostream>
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
}