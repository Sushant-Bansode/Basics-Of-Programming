#include<iostream>
using namespace std;

struct employee{
 string name;
 int age;
 float weight;
};

employee * Getdetails () {
 employee *ptr = new (employee);
 cout << "enter details" << endl;
 cin >> ptr -> name >> ptr -> age >> ptr -> weight;   
}

int main() {
employee *e = Getdetails();
cout << "Name " << e->name << endl;
cout << "age " << e->age << endl;
cout << "weight " << e->weight << endl;
}
