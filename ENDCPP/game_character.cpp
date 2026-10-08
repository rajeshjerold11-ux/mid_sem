#include <iostream>
using namespace std;

class Character
{
public:
    string name;
    int health;


    Character(string n, int h)
    {
        name = n;
        health = h;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
    }
};

int main()
{
    Character c1("JERO", 100);
    Character c2("BESTROOMATE", 80);

    cout << "Character 1:" << endl;
    c1.display();

    cout << "\nCharacter 2:" << endl;
    c2.display();

    return 0;
}
