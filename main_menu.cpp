#include <iostream>
#include <vector>
#include "candy_quest_functions.h"
using namespace std;

void main_menu(int pointer_position_main) { // Display the main menu
    string pointer = "<--";
    clear_screen(); // Clear the screen
    vector<string> options = {"🍡 Play Game", "🍡 Show Demo", "🍡 Quit"};
    cout << "\n🍰🍡🍭🍬🍫🍧🍦🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩" << endl;
    cout << "---- CANDY QUEST ----" << endl;
    for (int i = 0; i < options.size(); ++i) { // Loop through the options
        if (i == pointer_position_main) {
            cout << options[i] << " " << pointer << endl;
        } else {
            cout << options[i] << endl;
        }
    }
    cout << "🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩\n" << endl;
}
