

#include <iostream>

using namespace std;

class alpha
{
private:
    int id;
    static int count;
public:
    alpha()
    {
        count++;
        id=count;
    }
    void print()
    {
        cout << "My id is " << id << endl;
        cout << "count is " << count << endl;
    }
};

int alpha :: count=0;

int main()
{
    class alpha a1;
    a1.print();
    class alpha a2;
    a2.print();
    class alpha a3;
    a3.print();
    a1.print();
    return 0;
}