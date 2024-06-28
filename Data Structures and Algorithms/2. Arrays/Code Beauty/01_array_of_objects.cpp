#include <iostream>
using namespace std;

class Student{
public:
    // data members
    string name;
    int age;
    char gender;
    float grade;

    // default constructor
    Student(){}
    //constructor to initialized values
    Student(string name, int age, char gender, float grade){
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->grade = grade;
    }
};

int main(){

    // Student students[3] = {
    //     {"Saldina", 28, 'f', 9},
    //     {"Elon", 50, 'm', 10},
    //     {"Bill", 60, 'm', 9}
    // };

    int number;
    cout << "Enter total students: " << '\n';
    cin >> number;

    Student students[number];
    for(int i = 0; i < number; i++){
        cout << "Enter details of " << i + 1 << " student: " << '\n';
        Student s;
        puts("Enter name: ");
        cin >> s.name;
        puts("Enter age: ");
        cin >> s.age;
        puts("Enter gender: ");
        cin >> s.gender;
        puts("Enter grade: ");
        cin >> s.grade;

        students[i] = s;
    }

    double sumOfGrades = 0;
    for(int i = 0; i < number; i++){
        sumOfGrades += students[i].grade;
    }

    cout << "Average grade of students: " << sumOfGrades / number << '\n';
    return 0;
}
