#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student();
    Student(string n, int a);
    void displayStudent();
};
void Student :: displayStudent(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
Student :: Student(){
    name = "John";
    age = 20;
}
Student :: Student(string n, int a){
    name = n;
    age = a;
}
int main(){
    Student c("Victoria", 25);
    c.displayStudent();
    return 0;
}