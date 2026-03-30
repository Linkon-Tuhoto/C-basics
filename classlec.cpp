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
int main(){
    Animal a;
    a.move();
    return 0;
}