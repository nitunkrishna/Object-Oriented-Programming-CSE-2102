#include"bits/stdc++.h"

using namespace std;

namespace operation
{
    int add(int a, int b)
    {
        return (a+b);
    }
    int substract(int a, int b)
    {
        return (a-b);
    }
    int multiply(int a, int b)
    {
        return (a*b);
    }
    int divide(int a, int b)
    {
        return (a/b);
    }
}

int main()
{
    int a=10, b=5;
    cout << "ADDITION: " << operation :: addition(a,b) << endl;
    cout << "SUBSTRACTION: " << operation :: substract(a,b) << endl;
    cout << "MULTIPLICATION: " << operation :: multiply(a,b) << endl;
    cout << "DIVISION: " << operation :: divide(a,b) << endl;
    return 0;
}