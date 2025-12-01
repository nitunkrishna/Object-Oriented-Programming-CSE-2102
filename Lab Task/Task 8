#include<iostream>
#include<cstring>

using namespace std;

class mystring
{
    string str;
public:
    void input()
    {
        cout << "Enter String: ";
        cin >> str;
    }
    void display()
    {
        cout << str << endl;
    }
    mystring operator+(const mystring &a)
    {
        mystring x;
        x.str=str+a.str;
        return x;
    }
    bool operator==(const mystring &a)
    {
        return str==a.str;
    }
    bool operator<=(const mystring &a)
    {
        return str<=a.str;
    }
    bool operator>=(const mystring &a)
    {
        return str>=a.str;
    }
};

int main()
{
    mystring s1, s2;
    s1.input();
    s2.input();
    cout << "After comparing two strings---" << endl;

    if(s1==s2)
        cout << "Two strings are equal." << endl;
    else if(s1>=s2)
        cout << "1st string is greater than 2nd string." << endl;
    else if(s1<=s2)
        cout << "2nd string is greater than 1st string." << endl;

    cout << "Concatenation of both strings: ";
    mystring s3=s1+s2;
    s3.display();
    cout << endl;
}
