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
    else
    {
        cout << "you cannot vote";
    }

    return 0;
}