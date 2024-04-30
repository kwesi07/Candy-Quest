#include "candy_quest_functions.h"
#include <iostream>
#include <fstream>



void highscore_menu(int pointer_position_main, bool clearscreen) {
    string pointer = "<--";
    if (clearscreen) {
        clear_screen();
    }
    vector<string> options = {"🍡 Target Mode Highscore", "🍡 Limited Moves Highscore", "🍡 Back"};
    cout << "\n🍰🍡🍭🍬🍫🍧🍦🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩" << endl;
    cout << "---- CANDY QUEST ----" << endl;
    for (int i = 0; i < options.size(); ++i) {
        if (i == pointer_position_main) {
            cout << options[i] << " " << pointer << endl;
        } else {
            cout << options[i] << endl;
        }
    }
    cout << "🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩\n" << endl;
}

void view_highscores() {
    int pointer_position_main = 0;
    while (true) {
        highscore_menu(pointer_position_main, true);
        char player_input_main = get_player_input();
        move_pointer(pointer_position_main, player_input_main);
        if (player_input_main == 'Y') {
            if (pointer_position_main == 0) {
                vector<pair<string, int>> highScores = load_highscores("move_highscore.txt");
                for (size_t i = 0; i < highScores.size(); ++i) {
                    cout << "Rank " << i + 1 << ": " << highScores[i].first << " with " << highScores[i].second << " moves" << endl;
                }
                cout << "Press enter to continue: ";
                cin.get();
            } else if (pointer_position_main == 1) {
                vector<pair<string, int>> highScores = load_highscores("ltd_moves_highscore.txt");
                for (size_t i = 0; i < highScores.size(); ++i) {
                    cout << "Rank " << i + 1 << ": " << highScores[i].first << " with score " << highScores[i].second << endl;
                }
                cout << "Press enter to continue: ";
                cin.get();

            } else if (pointer_position_main == 2) {
                break;
            }
            cin.get();
        }
    }
}