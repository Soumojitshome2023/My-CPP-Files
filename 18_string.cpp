#include <iostream>
#include <string>
using namespace std;
int main(){

    string name = "harry";
    cout<<"The name is "<<name<<endl;

    cout<<"The length of name is "<<name.length()<<endl;

    cout<<"The name is "<<name.substr(1,4)<<endl;
    cout<<"The name is "<<name.substr(2,3);
    
    return 0;
}