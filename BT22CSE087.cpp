#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    int experience;

public:
    long long salary = 0;

    Person(string n, int a, int e) : name(n), age(a), experience(e) {
        cout << "Employee Details:\nName: " << name << "\nAge: " << age << "\nExperience: " << experience << endl;
    }

    ~Person() {
        cout << "Destructor is called for " << name << endl;
    }
};

class SpecialEmployee : public Person {
    bool specialEmployee;

public:
    SpecialEmployee(string n, int a, int e, bool se) : Person(n, a, e), specialEmployee(se) {
        if (specialEmployee) {
            salary += 50000;
        }
    }
};

class AdhocEmployee : public SpecialEmployee {
    bool adhocEmployee;

public:
    AdhocEmployee(string n, int a, int e, bool se, bool ae) : SpecialEmployee(n, a, e, se), adhocEmployee(ae) {
        if (adhocEmployee) {
            salary += 10000;
        }
    }
};

class RegularEmployee : public AdhocEmployee {
    bool regularEmployee;

public:
    RegularEmployee(string n, int a, int e, bool se, bool ae, bool re) : AdhocEmployee(n, a, e, se, ae), regularEmployee(re) {
        if (regularEmployee) {
            salary += 70000;
        }
    }
};

int main() {
    string name;
    int age, experience;
    bool se, ae, re;

    cout << "Enter employee details:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Experience: ";
    cin >> experience;
    cout << "Is Special Employee (0 or 1): ";
    cin >> se;
    cout << "Is Adhoc Employee (0 or 1): ";
    cin >> ae;
    cout << "Is Regular Employee (0 or 1): ";
    cin >> re;

    RegularEmployee emp(name, age, experience, se, ae, re);

    cout << "Total Salary: " << emp.salary << endl;

    return 0;
}


//OUTPUT:

// Enter employee details:
// Name: Sarvesh
// Age: 18
// Experience: 3
// Is Special Employee (0 or 1): 1
// Is Adhoc Employee (0 or 1): 0
// Is Regular Employee (0 or 1): 1
// Employee Details:
// Name: Sarvesh
// Age: 18
// Experience: 3
// Total Salary: 120000
// Destructor is called for Sarvesh