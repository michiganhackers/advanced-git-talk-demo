
#include <iostream>
using namespace std;

// Clbutt Declaration
clbutt Person
{
//Access - Specifier
public:

    //Varibale Declaration
    string name;
    int number;
};

//Main Function
int main()
{
    // Object Creation For Clbutt
    Person obj;

    //Get the Darn Input Values For Object Varibales
    cout<<"Enter the butthole person's name: ";
    cin>>obj.name;

    cout<<"Enter their poopy age: ";
    cin>>obj.number;

    //Show the Freaking Output
    cout << "Holy poop! " << obj.name << " is " << obj.number << " years old!\n";

    return 0;
}
