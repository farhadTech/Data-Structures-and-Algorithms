#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int age;
    char gender;
    float grade;
};

void printStudents(Student* students, int size){
    for(int i = 0; i < size; i++){
        cout << "STUDENT " << i + 1 << "\n";
        cout << "Name: " << students[i].name << "\t";
        cout << "Age: " << students[i].age << '\t';
        cout << "Gender: " << students[i].gender << '\t';
        cout << "Grade: " << students[i].grade << '\n';
    }
}

int main(){
    int size;
    cout << "Enter size of students: \n";
    cin >> size;

    Student* students = new Student[size];

    for(int i = 0; i < size; i++){
        Student s;
        cout << "STUDENT " << i + 1 << '\n';
        cout << "Enter name: ";
        cin >> s.name;
        cout << "Enter age: ";
        cin >> s.age;
        cout << "Enter gender: ";
        cin >> s.gender;
        cout << "Enter grade: ";
        cin >> s.grade;

        students[i] = s;
    }

    printStudents(students, size);

    char choice;
    cout << "Do you want a bigger array: \t";
    cout << "Type Y/y for yes and N/n for no\n";
    cin >> choice;

    if(choice == 'n' or choice == 'N'){
        delete[] students;
        return 0;
    }

    int newSize;
    cout << "Enter new size: \n";
    cin >> newSize;

    // 1. allocate newStudents array
    Student* newStudents = new Student[size];

    // 2. copy element from students array to newStudents array
    // first approach to copy
    //memcpy(newStudents, students, sizeof(Student) * size);

    // second approach
    for(int i = 0; i < size; i++){
        newStudents[i] = students[i];
    }

    // 3. delete students
    delete[] students;

    // 4. students should point to the same address as newStudents
    students = newStudents;

    for(int i = size; i < newSize; i++){
        cout << "STUDENT " << i + 1 << '\n';
        Student s;
        cout << "Name: ";
        cin >> s.name;
        cout << "Age: ";
        cin >> s.age;
        cout << "Gender: ";
        cin >> s.gender;
        cout << "Grade: ";
        cin >> s.grade;

        newStudents[i] = s;
    }

    printStudents(students, newSize);
    return 0;
}
