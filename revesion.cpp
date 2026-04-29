#include <iostream>
using namespace std;
/*int m;
int n = 8;
int &r = m;
int *p;
p = &n;*/


/*class Vehicle{
    private:
    int chassisno;
    public:
    void drive();
    void reverse();
}*/

/*int k=1;
while(k <= rows){
    cout << "Enter item" << k<< endl;
    cin >> item;
    cout << item << "Received" << endl;
    k ++;
}*/

//oop structure in c++ program
class Cow{
    private:
    int legs;
    public:
    void number(int l);
    void display();
};
void Cow :: number(int l){
    legs = l;
}
void Cow :: display(){
    cout << "Legs are " << legs << endl;
}
int main(){
    Cow a;
    a.number(4);
    a.display();
    return 0;
}