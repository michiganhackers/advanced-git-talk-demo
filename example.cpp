
#include <iostream>
using namespace std;

// Class Declaration
class person
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
    person obj;

    //Get Input Values For Object Varibales
    cout<<"Enter the person's name: ";
    cin>>obj.name;

    cout<<"Enter their age: ";
    cin>>obj.number;

    //Show the Output
    cout << obj.name << " is " << obj.number << " years old!\n";

    return 0;
}
