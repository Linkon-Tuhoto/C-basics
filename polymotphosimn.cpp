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

//question 1
#include <iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    Complex();
    void operator ++();
    void displayComplex();
};
Complex :: Complex(){
    real=0;
    imag=0;
}
void Complex :: operator ++(){
    real = real + 2;
    imag = imag + 5;
}
void Complex :: displayComplex(){
    cout << "The complex number is " << real << " + " << imag << "i" << endl;
}







//>Runtym polymorphism
//2.Operator overriding

/*#include <iostream>
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
}*/