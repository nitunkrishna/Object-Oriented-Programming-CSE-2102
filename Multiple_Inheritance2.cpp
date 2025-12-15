#include"bits/stdc++.h"

using namespace std;

class worker
{
    int age;
    char name[20];
public:
    void get()
    {
        cout << "Your name: ";
        cin >> name;
        cout << "Your age: ";
        cin >> age;
    }
    void show()
    {
        cout << "Worker name: " << name << endl;
        cout << "Worker age: " << age << endl;
    }
};

class manager : public worker
{
    int workers;
public:
    void get()
    {
        worker :: get();
        cout << "Number of workers under you: ";
        cin >> workers;
    }
    void show()
    {
        worker :: show();
        cout << "Number of workers under me: " << workers << endl;
    }
};

class ceo : public manager
{
    int managers;
public:
    void get()
    {
        manager :: get();
        cout << "Number of managers under you: ";
        cin >> managers;
    }
    void show()
    {
        manager :: show();
        cout << "Number of managers under me: " << managers << endl;
    }
};

int main()
{
    ceo ob;
    ob.get();
    ob.show();
    return 0;
}