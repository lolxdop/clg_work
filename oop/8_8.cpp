#include <iostream>
using namespace std;
class Employee{
    string name, department;
    int id;
    public:
    void accept(){
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your ID: ";
        cin>>id;
        cout<<"Enter your Department: ";
        cin>>department;}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<department<<endl;}};
int main() {
    Employee e[5];
    for (int i=0;i<5;i++){
        cout<<"Details of Employee "<<i+1<<endl;
        e[i].accept();
    }
    for (int j=0;j<5;j++){
        cout<<"Emplyee "<<j+1<<" Record: "<<endl;
        e[j].display();
    }
    return 0;
}
