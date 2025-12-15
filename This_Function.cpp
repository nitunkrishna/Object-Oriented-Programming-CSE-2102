#include<iostream>

using namespace std;

class inventory
{
    char item[20];
    double cost;
    int on_hand;
public:
    inventory(char *i, double c, int o)
    {
        strcpy(this->item, i);
        cost=c;
        this->cost=c;
        this->on_hand=o;
        this->cost=c;
        this->show();
    }
    void show();
};

void inventory::show()
{
    cout << "Item: " << this->item << endl;
    cout << "Cost: " << this->cost << endl;
    cout << "In Hand: " << this->on_hand << endl;
}

int main()
{
    inventory obj("Mango", 45.5, 1);
    obj.show();
    return 0;
}