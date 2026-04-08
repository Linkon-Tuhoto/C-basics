#include <iostream>
using namespace std;
class Animal{
    public:
    int legs, wings;
    string name;
    void move();
    Animal();
    Animal(int l, int w);
    Animal(Animal& org); //Copy constructor
    ~Animal(); //Destructor 
};
void Animal :: move(){
    cout << "Animal is running" << endl;
}
Animal :: Animal(){
    cout << "DC:creating an animal" << endl;
    legs = 4;
    wings = 8;
    name = "A";
}
Animal :: Animal(int l, int w){
    cout << "PC: animal moving" << endl;
    legs = l;
    wings = w;
    name = "B";
}
Animal :: Animal(Animal& org){
    cout << "CC: Cloning an animal" << endl;
    legs = org.legs;
    wings = org.wings;
    name = "C";
};
Animal :: ~Animal(){
    cout << "Killing ....." << name << endl ;
}
int main(){
    Animal a;
    a.move();
    Animal b(2,4);
    Animal c(b);
    return 0;
}