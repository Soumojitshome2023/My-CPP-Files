#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

};

int main(){
    Employee har;
    har.name = "harry";
    har.salary = 100;

    cout<<"The name of our first employee is "<< har.name << " and his salary is "<<har.salary<<" Dollars"<<endl;


    return 0;
}