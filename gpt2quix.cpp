#include <iostream>
using namespace std;
class Student{ 
    public:
    string name;
    void displayName();
};
void Student :: displayName(){
    cout << "My name is " << name << endl;
}
int main(){
    Student a;
    a.name = "Kang'ethe";
    a.displayName();
    return 0;
} 