#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "candy_quest_functions.h"
using namespace std;

void print_with_delay(const string& text) { //function to print text with delay
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(30));
    }
    cout << endl;
}
