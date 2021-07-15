#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <thread>

using namespace std;

bool isLoading = false;

void moveloop() {
    while(!isLoading) {
            keybd_event(0x57, 0, 0, 0);
            Sleep(800);
            keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
            Sleep(500);

            keybd_event(0x41, 0, 0, 0);
            Sleep(800);
            keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
            Sleep(500);

            keybd_event(0x53, 0, 0, 0);
            Sleep(800);
            keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(0x44, 0, 0, 0);
            Sleep(800);
            keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(VK_LCONTROL, 0xa2, 0, 0);
            keybd_event(VK_CONTROL, 0x11, 0, 0);
            Sleep(1000);
            keybd_event(VK_LCONTROL, 0xa2, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_CONTROL, 0x11, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(VK_RBUTTON, 0x02, 0, 0);
            Sleep(1000);
            keybd_event(VK_RBUTTON, 0x02, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(VK_TAB, 0x09, 0, 0);
            Sleep(100);
            keybd_event(VK_TAB, 0x09, KEYEVENTF_KEYUP, 0);
            Sleep(800);
            
            keybd_event(VK_TAB, 0x09, 0, 0);
            Sleep(100);
            keybd_event(VK_TAB, 0x09, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(VK_SPACE, 0x20, 0, 0);
            Sleep(500);
            keybd_event(VK_SPACE, 0x20, KEYEVENTF_KEYUP, 0);
            Sleep(500);
            
            keybd_event(0x31, 0, 0, 0);
            Sleep(500);
            keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x32, 0, 0, 0);
            Sleep(500);
            keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x33, 0, 0, 0);
            Sleep(500);
            keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0);
            Sleep(300000);
    }
}

void joinloop() {
    while(true) {
        time_t ttime = time(0);
        tm* local_time = localtime(&ttime);
        int hour = local_time->tm_hour;
        int min = local_time->tm_min;
        int sec = local_time->tm_sec;

        if(hour == 6 && min == 30 && sec == 0) {

            cout << "Reconnecting..." << endl;
            isLoading = true;

            keybd_event(VK_F1, 0x70, 0, 0);
            keybd_event(VK_F1, 0x70, KEYEVENTF_KEYUP, 0);
            Sleep(2000);

            keybd_event(0x43, 0, 0, 0);
            keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);

            keybd_event(0x4F, 0, 0, 0);
            keybd_event(0x4F, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);

            keybd_event(0x4E, 0, 0, 0);
            keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x4E, 0, 0, 0);
            keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x45, 0, 0, 0);
            keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x43, 0, 0, 0);
            keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x54, 0, 0, 0);
            keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_SPACE, 0x20, 0, 0);
            keybd_event(VK_SPACE, 0x20, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x31, 0, 0, 0);
            keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x39, 0, 0, 0);
            keybd_event(0x39, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x33, 0, 0, 0);
            keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_OEM_PERIOD, 0xBE, 0, 0);
            keybd_event(VK_OEM_PERIOD, 0xBE, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x37, 0, 0, 0);
            keybd_event(0x37, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x30, 0, 0, 0);
            keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_OEM_PERIOD, 0xBE, 0, 0);
            keybd_event(VK_OEM_PERIOD, 0xBE, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x38, 0, 0, 0);
            keybd_event(0x38, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x30, 0, 0, 0);
            keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_OEM_PERIOD, 0xBE, 0, 0);
            keybd_event(VK_OEM_PERIOD, 0xBE, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x31, 0, 0, 0);
            keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x37, 0, 0, 0);
            keybd_event(0x37, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x38, 0, 0, 0);
            keybd_event(0x38, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_LSHIFT, 0xA0, 0, 0);
            keybd_event(VK_SHIFT, 0x10, 0, 0);
            Sleep(100);
            
            keybd_event(VK_OEM_1, 0xBA, 0, 0);
            keybd_event(VK_OEM_1, 0xBA, KEYEVENTF_KEYUP, 0);
            Sleep(100);
            
            keybd_event(VK_LSHIFT, 0xA0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_SHIFT, 0x10, KEYEVENTF_KEYUP, 0);
            Sleep(100);
            
            keybd_event(0x32, 0, 0, 0);
            keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x38, 0, 0, 0);
            keybd_event(0x38, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x30, 0, 0, 0);
            keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x31, 0, 0, 0);
            keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(0x31, 0, 0, 0);
            keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0);
            Sleep(200);
            
            keybd_event(VK_RETURN, 0x0D, 0, 0);
            keybd_event(VK_RETURN, 0x0D, KEYEVENTF_KEYUP, 0);
            Sleep(1000);
            
            keybd_event(VK_F1, 0x70, 0, 0);
            keybd_event(VK_F1, 0x70, KEYEVENTF_KEYUP, 0);
            Sleep(400000);

            isLoading = false;
        }
    }
}

int main() {
    char ok;
    char joinfunc;

    cout << "Use this software at your own risk!\n Ok?(y/n)";
    cin >> ok;

    if((ok == 'y') || (ok == 'Y')) {
        
        system("cls");

        cout << "Do you need the \"join\" function?(y/n)";
        cin >> joinfunc;

        system("cls");

        cout << "Move focus to the game window...\n";
        for (short i = 10; i > 0; i--) {
            cout << i << endl;
            Sleep(1000);
        }

        system("cls");

        cout << "Running..." << endl;

        ShowWindow(GetConsoleWindow(), SW_MINIMIZE);

        thread move(moveloop);
        thread join(joinloop);

        if((joinfunc == 'y') || (joinfunc == 'Y')) {
            move.join();
            join.join();
        }
        else {
            move.join();
        }
    } else {
        cout << "Bye!";
        Sleep(2000);
    }
    return 0;
}