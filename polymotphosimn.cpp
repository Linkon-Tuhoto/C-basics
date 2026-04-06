#include <iostream>
using namespace std;
class Person{
    private:
    int age;
    public:
    Person();//constructor function
    void operator ++();
    void display2Age();
};
Person :: Person(){
    age =8;
}
void Person :: operator ++(){
    age = age + 5;
}
void Person :: display2Age(){
    cout << "My age is " << age << endl;
}
int main(){
    Person p;
    ++p;//calling overloaded operator function
    p.display2Age();
    return 0;
}