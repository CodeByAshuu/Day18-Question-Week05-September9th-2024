#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(string fName, string lName, int ageVal)
        : firstName(fName), lastName(lName), age(ageVal) {}

    string getFullName() const {
        return firstName + " " + lastName;
    }

    void getDetails(string &fName, string &lName, int &ageVal) const {
        fName = firstName;
        lName = lastName;
        ageVal = age;
    }
};

int main() {
    Person person("John", "Doe", 25);

    cout << "Full Name: " << person.getFullName() << endl;

    string fName, lName;
    int ageVal;

    person.getDetails(fName, lName, ageVal);

    cout << "First Name: " << fName << endl;
    cout << "Last Name: " << lName << endl;
    cout << "Age: " << ageVal << endl;

    return 0;
}
