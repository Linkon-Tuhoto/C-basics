//We use function overloading to introduce flexibility.
#include <iostream>
using namespace std;
class Animal{
    private:
    int legs, wings;
    public:
    void move();
    void move(int x);
    void move(int x, int y);//functtion overloading
    void move(int x, int y, string h);//functtion overloading
};
void Animal:: move(){ //Member function definition - adding scope resoluution
    cout << "Animal moving " << endl;
}
void Animal :: move(int x){
    cout << "Animal walking " << endl;
}
void Animal :: move(int x, int y){
    cout << "Animal flying " << endl;
}
int main(){
    Animal a;
    a.move();
    a.move(4);
    a.move(4, 6);
    return 0;
}