
#include <iostream>
using namespace std;

// Class Declaration
class Person
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
    // Object Creation For Class
    Person obj;

    //Get the Damn Input Values For Object Varibales
    cout<<"Enter the asshole person's name: ";
    cin>>obj.name;

    cout<<"Enter their shitty age: ";
    cin>>obj.number;

    //Show the Fucking Output
    cout << "Holy shit! " << obj.name << " is " << obj.number << " years old!\n";

    return 0;
}
