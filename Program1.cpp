#include<iostream>
#include<cstring>

using namespace std;

class student
{
    public:
    string name;
    int id;

public:
    void getvalue()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Id: ";
        cin >> id;
    }

    void displayvalue()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Id: " << id << endl;
    }
};

int main()
{
    student s1; //Creation of Object
    s1.getvalue(); //Getting the value of variables using a function
    s1.displayvalue();
}
