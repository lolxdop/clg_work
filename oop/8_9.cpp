#include <iostream>
using namespace std;
class Students{
    string name;
    int roll_no, percent;
    public:
    void accept(){
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your Roll No.: ";
        cin>>roll_no;
        cout<<"Enter your Percentage: ";
        cin>>percent;}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll_no<<endl;
        cout<<"Percentage: "<<percent<<endl;}};
int main() {
    Students s[10];
    for (int i=0;i<10;i++){
        cout<<"Details of Student "<<j+1<<endl;
        s[i].accept();
    }
    for (int j=0;j<10;j++){
        cout<<"Student "<<j+1<<" Record: "<<endl;
        s[j].display();
    }
    return 0;
}
