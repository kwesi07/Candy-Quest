#include <iostream>
using namespace std;
#include "candy_quest_functions.h"

bool confirm_quit() { //function to confirm if user wants to quit
    string confirmation;
    cout << "Are you sure you want to quit? (Y/N): ";
    cin >> confirmation;
    return toupper(confirmation[0]) == 'Y';
}