#include <iostream>
#include <cstring>
// XYZ institute has collected data regarding covid-19 vaccinated students of age group 18-24yrs.
// On the basis of provided data a programmer can manage information in a way that
// it will be available to the Administration ONLY.
// Student details will include Student Name, Vaccine Name, Student Age, and Number of doses taken.

// Create class objects std1, std2 and std3 of class Student.
// Use default constructor to assign default data values to the class object std1.
// Use parameterized constructor to assign data values to the class object std2.
// Use Setter() and Getter() methods to assign and print values of the class object std3.
// Use Friend function display() for objects std1 and std2 only.
// You will print data values of object std3 using getName(), getVaccine(), getAge(), getDose() and getter() member functions.
using namespace std;

class Student {
    char std_id[20];
    char vac_name[10];
    int age;
    int num_dose;
public:

    Student() {
        strcpy(std_id, "bc12345678");
        strcpy(vac_name, "Sinovac");
        Student::age = 20;
        Student::num_dose = 3;
    }

    Student(const char id[20], const char vac[10], int age, int numDose) {
        strcpy(std_id, id);
        strcpy(vac_name, vac);
        Student::age = age;
        num_dose = numDose;
    }

    void setName(const char id[20]) {
        strcpy(std_id, id);
    }

    void setVaccine(const char vac[10]) {
        strcpy(vac_name, vac);
    }

    void setAge(int age) {
        Student::age = age;
    }

    void setNumDose(int numDose) {
        num_dose = numDose;
    }

    const char *getStdId() const {
        return std_id;
    }

    const char *getVacName() const {
        return vac_name;
    }

    int getAge() const {
        return age;
    }

    int getNumDose() const {
        return num_dose;
    }

    void friend display(Student std) {
        cout << "Student ID: " << std.std_id << endl;
        cout << "Age: " << std.age << endl;
        cout << "Vaccination: " << std.vac_name << endl;
        cout << "Vaccinated Doses: " << std.num_dose << endl << endl;
    }
};

using namespace std;

int main() {
    Student std1;
    Student std2("BC123456789", "Sinopharm", 21, 2);
    Student std3;
    std3.setName("MC123456789");
    std3.setVaccine("Moderna");
    std3.setAge(22);
    std3.setNumDose(3);

    cout << "Printing std1 object values using display() ..." << endl;
    display(std1);

    cout << "Printing std2 object values using display() ..." << endl;
    display(std2);

    cout<< "Printing std3 object values using getter() method ..." <<endl;
    cout << "Student ID: " << std3.getStdId() << endl;
    cout << "Age: " << std3.getAge() << endl;
    cout << "Vaccination: " << std3.getVacName() << endl;
    cout << "Vaccinated Doses: " << std3.getNumDose() << endl << endl;
    return 0;
}
