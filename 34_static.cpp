#include<iostream>
using namespace std;

int product(){
   
    static int c=0;         // static use kore c ar last value ta dhore rakha jai 
    c = c + 1; 
    return c;
}
int main(){

    cout<<"The product of a and b is "<<product()<<endl;
    cout<<"The product of a and b is "<<product()<<endl;
    cout<<"The product of a and b is "<<product()<<endl;
    
    return 0;
}
