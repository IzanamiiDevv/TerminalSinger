#include <iostream>
#include <string>
//#include <chrono>
#include <windows.h>
//#include <thread>

using namespace std;

void type(const string &word, int start, int end, int next) {
    int duration = (end - start) * 1000;
    int interval = duration / word.length();

    for (int i = 0; i < word.length(); i++) {
        //this_thread::sleep_for(chrono::milliseconds(interval));
        Sleep(interval);
        cout << word.at(i);
        cout.flush();
    }
    cout << endl;
    Sleep(next);
    system("cls");
}

int main() {
    type("What if I told you that I've fallen?", 19, 21, 2400);
    type("And I like the way you say my name", 23, 25, 2600);
    type("My heart skips a beat when I hear you calling",28,31, 1600);
    type("And I like that it won't go away",33,35,4100);
    type("But never mind,",39,40, 1100);
    type("don't wanna give you any trouble",42,44,100);
    type("Never mind, never mind", 44,47, 10000);
    return 0;
}
