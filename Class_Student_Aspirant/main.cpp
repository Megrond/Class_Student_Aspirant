#include <iostream>
#include <string>

using namespace std;

class Student 
{
public:
    string name;
    int age;

    Student(string studentName, int studentAge) : name(studentName), age(studentAge) {}

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Aspirant : public Student 
{
public:
    string researchTopic;

    Aspirant(string studentName, int studentAge, std::string topic) : Student(studentName, studentAge), researchTopic(topic) {}

    void display() 
    {
        cout << "Name: " << name << ", Age: " << age << ", Research Topic: " << researchTopic << std::endl;
    }
};

int main()
{
    Student student1("Viktor", 20);

    cout << "Student: ";
    student1.display();


    Aspirant aspirant1("Andrei", 25, "Developer");

    cout << "Aspirant: ";
    aspirant1.display();

    return 0;
}