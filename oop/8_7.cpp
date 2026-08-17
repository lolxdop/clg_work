#include <iostream>
using namespace std;
class customer_records{
    string name;
    int salary;
    public:
    void accept(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your salary: ";
        cin>>salary;}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;}};
int main() {
    customer_records c[5];
    for (int i=0;i<5;i++){
        cout<<"Details of Customer "<<i+1<<endl;
        c[i].accept();
    }
    for (int j=0;j<5;j++){
        cout<<"Customer "<<j+1<<" Record: "<<endl;
        c[j].display();
    }
    return 0;
}
