#include <iostream>
#include <Windows.h>

using namespace std;

void menu() {
    cout << "Press Z to start clicker and X to disable" << endl;
}

void clicker() {
    bool click = false;

    while(true) {
        if(GetAsyncKeyState('Z')) {
            click = true;
        }
        else if(GetAsyncKeyState('X')) {
            click = false;
        }
        if(click) {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        Sleep(2);       
        }
    }
}



int main() {
    
    menu();
    clicker();

    return 0;
}