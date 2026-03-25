//Constructor is a special function that runs automatically when an object is created.its used to initialize values
//simple constructor
#include <iostream>
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
}