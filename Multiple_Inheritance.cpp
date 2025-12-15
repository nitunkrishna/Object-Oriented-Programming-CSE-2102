#include<iostream>

using namespace std;

class father
{
private:
    int age;
    char name[50];
protected:
public:
    void get()
    {
        cout << "Enter father's name: ";
        cin >> name;
        cout << endl;
        cout << "Enter father's age: ";
        cin >> age;
        cout << endl;
    }
    void show()
    {
        cout << "Father's Name: " << name << endl;
        cout << "Father's Age: " << age << endl;
    }
};

class mother
{
private:
    int age;
    char name[50];
protected:
public:
    void get()
    {
        cout << "Enter mother's name: ";
        cin >> name;
        cout << endl;
        cout << "Enter mother's age: ";
        cin >> age;
        cout << endl;
    }
    void show()
    {
        cout << "Mother's Name: " << name << endl;
        cout << "Mother's Age: " << age << endl;
    }
};

class daughter : public father, public mother
{
private:
    int age;
    char name[50];
protected:
public:
    void get()
    {
        father :: get();
        mother :: get();
        cout << "Enter name: ";
        cin >> name;
        cout << endl;
        cout << "Enter age: ";
        cin >> age;
        cout << endl;
    }
    void show()
    {
        father :: show();
        mother :: show();
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    daughter ob;
    ob.get();
    ob.show();
    return 0;
}