//Constructor is a special function that runs automatically when an object is created.its used to initialize values
//simple constructor
/*#include <iostream>
using namespace std;
class Student{
    public:
    string name;

    Student(){
        name = "Victoria";
        cout << "My name is ";
    }
};
int main(){
    Student s1;
    cout << s1.name;
    return 0;
}*/

//parameterized constructor
/*#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    
    Person(string n, int a){
        name = n;
        age = a;
    }
};
int main(){
    Person s1("Victoria", 22);
    cout<< s1.name << " " << s1.age;
    return 0;
}*/

//using this pointer
/*#include <iostream>
using namespace std;
class Pupil{
    public:
    string name;
    int age;

    Pupil(string name, int age){
        this->name = name;
        this->age = age;
    }
};*/

//constructor with inheritance
#include <iostream>
using namespace std;

class Rep{
    public:
    string name;

    Rep(string n){
        name = n;
    }
};
class Teacher : public Rep{
    public:
    int salary;

    Teacher(string n, int s) : Rep(n){
        salary = s;
    }
};
int main(){
    Teacher e("Victoria", 50000);
    cout << e.name << endl;
    cout << e.salary << endl;

    return 0;
}
