#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

    return 0;
}
