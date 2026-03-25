#include <iostream>
using namespace std;
class Person{
    public:
    void display();
};
class Employee : public Person{
    public:
    void job();
};
class Manager : public Employee{
    public:
    void salary();
};
void Manager :: salary(){
    cout << "I earn a salary of 50000yen" << endl;
}
void Employee :: job(){
    cout << "Am a junior employee at Microsoft" << endl;
}
void Person :: display(){
    cout << "Am King'ori and am looking for a job" << endl;
}
int main(){
    Manager a;
    a.display();
    a.job();
    a.salary();
}