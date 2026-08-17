#include <iostream>
using namespace std;
class book_records{
    string b_name, a_name;
    int ID;
    public:
    void accept(){
        cout<<"Enter book name: ";
        cin>>b_name;
        cout<<"Enter author name: ";
        cin>>a_name;
        cout<<"Enter book id: ";
        cin>>ID;}
    void display(){
        cout<<"Book name: "<<b_name<<endl;
        cout<<"Author name: "<<a_name<<endl;
        cout<<"Book ID: "<<ID<<endl;}};
int main() {
    book_records b[10];
    for (int i=0;i<10;i++){
        cout<<"Details of Book "<<i+1<<endl;
        b[i].accept();
    }
    for (int j=0;j<10;j++){
        cout<<"Book "<<j+1<<" Record: "<<endl;
        b[j].display();
    }
    return 0;
}
