#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> person;
    person.push("AQL");
    person.push("BIG MOUSE");
    person.push("JERO");
    person.push("BH IRONMAN");
    person.push("HR");
    person.push("BOSEYY");
    person.push("y_POP");

    cout<<"ticket given to:"<<person.front()<<endl;
    person.pop();

    cout<<"waiting people"<<endl;
    while(!person.empty()){
    cout<<person.front()<<endl;
    person.pop();
    }
     return 0;
}



