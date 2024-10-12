#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
};

int main()
{
    Employee emp;
    emp.name = "soumojit";
    emp.salary = 100;

    cout << "The name of our first employee is " << emp.name << " and his salary is " << emp.salary << " Dollars" << endl;

    return 0;
}