#include <iostream>
using namespace std;
class Animal{
    public:
    int legs;
    void sound();
};
class Dog :public Animal{
    public:
    int legs;
    void food();
};
class Puppy : public Dog{
    public:
    int see;
    void youngone();
};
void Puppy :: youngone(){
    cout << "The youngone of a dog is a puppy" <<endl;
}
void Dog :: food(){
    cout << "Dogs are carnivores thus feed on flesh" <<endl;
}
void Animal::sound(){
   cout << "Animal is Mammal and walks" <<endl;
}
int main(){
    Animal d;
    d.sound(); 
    Dog a;
    a.food();
    Puppy b;
    b.youngone();
    return 0;
}