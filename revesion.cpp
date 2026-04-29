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
/*class Cow{
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
}*/

//default argument
/*void greet(string name){
    cout << "Hello " << name << endl;
}
int main(){
    greet("Kamau");
    return 0;
}*/
//case statement
int main(){
int i;
int choices;
cout << "Enter a number btn 1 -5: " << endl;
cin >> choices;
switch(choices){
    case 1:
    cout << "Pilau" << endl;
    break;
    case 2:
    cout << "Rice" << endl;
    break;
    case 3:
    cout << "Ugali" << endl;
    break;
    case 4:
    cout << "Chapati" << endl;
    break;
    case 5:
    cout << "Githeri" << endl;
    break;
    default:
    cout << "Invalid choice" << endl;
}
return 0;
}