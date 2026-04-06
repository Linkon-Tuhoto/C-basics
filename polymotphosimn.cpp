//Polymorphism 
//>Compile tym polymorphism
//1 Operator overloading

/*#include <iostream>
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
}*/

//>Runtym polymorphism
//2.Operator overriding

#include <iostream>
using namespace std;
class Animal{
    public:
    int legs;
    void move();
};
class Bird : public Animal{
    public:
    void move();
};
void Bird :: move(){
    cout << "Bird is flying up higher in the sky" << endl;
}
void Animal :: move(){
    cout << "Animal walking faster" << endl;
}
int main(){
    Bird b;
    b.move();
    return 0;
}