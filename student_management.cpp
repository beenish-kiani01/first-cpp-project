#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {
    Student s1;

    cout << "Enter Student ID: ";
    cin >> s1.id;

    cout << "Enter Student Name: ";
    cin >> s1.name;

    cout << "\nStudent Record:" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;

    return 0;
}
