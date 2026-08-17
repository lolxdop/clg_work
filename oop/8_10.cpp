#include <iostream>
using namespace std;
class Staff{
    public:
    string name, post;
    int salary;
    public:
    void accept(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your post: ";
        cin>>post;
        cout<<"Enter your salary: ";
        cin>>salary;}
    void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Post: "<<post<<endl;
            cout<<"Salary: "<<salary<<endl;}};
int main() {
    Staff s[5];
    for (int i=0;i<5;i++){
        cout<<"Details of Staff "<<i+1<<endl;
        s[i].accept();
    }
    for (int j=0;j<5;j++){
        if(s[j].post=="HOD"){
            cout<<"Staff "<<j+1<<" Record: "<<endl;
            s[j].display();
        }}
    return 0;
}
