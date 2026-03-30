//we achieve overriding through  inheritance. In overriding, the base class and derived class have a function with the same name and same parameters. When we call the function using the object of the derived class, it will call the function of the derived class instead of the base class. This is called function overriding. It is used to provide a specific implementation of a function that is already provided by its base class. The implementation in the derived class overrides (replaces) the implementation in the base cla
#include <iostream>
using namespace std;
class Animal{
    public:
    void move();
};
class Bird : public Animal{
    public:
    int wings;
    void move();
};
void Animal:: move(){ //Member function definition - adding scope resoluution
    cout << "Animal moving " << endl;
}
void Bird :: move(){
    cout << "Bird is flying " << endl;
}
int main(){
    Bird a;
    a.move();
    return 0;
}