#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Enter age :" << endl;
    cin >> age;

    if (age > 18)
    {
        cout << "you can vote";
    }

    else if (age < 18)
    {
        cout << "you cannot vote";
    }

    else
    {
        cout << "Invalid";
    }

    return 0;
}