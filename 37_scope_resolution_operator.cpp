#include <iostream>
using namespace std;

class Employee
{
public:
    int a, b, c;
    void setData(int a1, int b1, int c1); // Declaration

    void getData()
    {

        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee soumojit;

    soumojit.setData(1, 2, 4);

    soumojit.getData();

    return 0;
}
