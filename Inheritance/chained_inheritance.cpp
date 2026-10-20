
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Patient : public Person
{
public:
    int patientNumber;

    void displayPatient()
    {
        cout << "Patient Number: "
             << patientNumber << endl;
    }
};

// Further derived class
class InPatient : public Patient
{
public:
    int roomNumber;

    void displayInPatient()
    {
        cout << "Room Number: " << roomNumber << endl;
    }
};

int main()
{
    InPatient p;

    // Members inherited from Person
    p.name = "Mary";
    p.age = 35;

    // Member defined in Patient
    p.patientNumber = 1025;

    // Member defined in InPatient
    p.roomNumber = 12;

    cout << "HOSPITAL PATIENT DETAILS" << endl;

    p.displayPerson();
    p.displayPatient();
    p.displayInPatient();

    return 0;
}
