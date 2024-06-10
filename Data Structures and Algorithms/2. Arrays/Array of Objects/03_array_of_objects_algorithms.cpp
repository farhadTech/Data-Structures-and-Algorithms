#include <iostream>
#include <algorithm>
using namespace std;

class Student{
public:
    string name;
    int age;
    char gender;
    float grade;

    Student(){}

    Student(string name, int age, char gender, float grade){
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->grade = grade;
    }
};

void printStudents(Student* students){
    for(int i = 0; i < 5; i++){
        cout << "Name: " << students[i].name << "\t";
        cout << "Age: " << students[i].age << "\t  ";
        cout << "Gender: " << students[i].gender << "\t";
        cout << "Grade: " << students[i].grade << "\n";
    }
    cout << "\n\n";
}

bool compare_by_grade(const Student& s1, const Student& s2){
    return s1.grade < s2.grade;
}

bool compare_by_name(const Student& s1, const Student& s2){
    return s1.name < s2.name;
}

bool compare_by_age(const Student& s1, const Student& s2){
    return s1.age < s2.age;
}

int main(){
    Student students[5] = {
        {"John", 20, 'm', 9},
        {"Bob", 21, 'm', 8},
        {"Alice", 19, 'f', 9.2},
        {"Eve", 20, 'f', 8.5},
        {"Saldina", 22, 'f', 7.2}
    };

    cout << "Initial information: \n";
    printStudents(students);
    // 1. Find and change
    for(int i = 0; i < 5; i++){
        if(students[i].name == "Alice"){
            cout << "Alice found at index" << i << "\n";
            students[i].grade = 10;
            break;
        }
    }

    cout << "After change: \n";
    printStudents(students);

    // 2. sorting by comparing
    sort(students + 0, students + 5, compare_by_grade);
    cout << "After sorting:\n";
    printStudents(students);

    // 3. reversing objects
    reverse(students + 0, students + 5);
    cout << "After reversing:\n";
    printStudents(students);

    Student* maxGradeStudent = max_element(students + 0, students + 5, compare_by_grade);
    cout << "Max grade student's name: " << maxGradeStudent->name << ", \tMax grade student' grade: " << maxGradeStudent->grade << '\n';

    Student* minGradeStudent = min_element(students + 0, students + 5, compare_by_grade);
    cout << "Min grade student's name: " << minGradeStudent->name << ", \tMin grade student' grade: " << minGradeStudent->grade << '\n';
    return 0;
}

