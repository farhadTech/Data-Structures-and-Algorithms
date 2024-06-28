#include <iostream>
using namespace std;
void message();
void message1();
void message2();
void message3();
void message4();

void message(){
    cout << "Hello World\n";
    message1();
}

void message1(){
    cout << "Hello World\n";
    message2();
}

void message2(){
    cout << "Hello World\n";
    message3();
}

void message3() {
    cout << "Hello World\n";
    message4();
}

void message4() {
    cout << "Hello World\n";
}

int main() {
    message();
    return 0;
}



