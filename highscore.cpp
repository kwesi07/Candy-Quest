#include <vector>
#include <string>
#include <iostream>
#include "candy_quest_functions.h"
using namespace std;

void highscore(int playerScore, int mode) {
    if (mode == 1) { // mode 1 is for target mode highscore
        vector<pair<string, int>> highScores = load_highscores("move_highscore.txt");
        check_and_add_highscore(playerScore, highScores, mode);
        for (size_t i = 0; i < highScores.size(); ++i) {
            cout << "Rank " << i + 1 << ": " << highScores[i].first << " with moves " << highScores[i].second << endl;
        }
        write_highscores(highScores, "move_highscore.txt");
    }
    else if (mode == 2) { // mode 2 is for limited moves highscore
        vector<pair<string, int>> highScores = load_highscores("ltd_moves_highscore.txt");
        check_and_add_highscore(playerScore, highScores, mode);
        for (size_t i = 0; i < highScores.size(); ++i) {
            cout << "Rank " << i + 1 << ": " << highScores[i].first << " with score " << highScores[i].second << endl;
        }
        write_highscores(highScores, "ltd_moves_highscore.txt");
    }
    else {
        cout << "Invalid mode" << endl;
        return; // return if mode is not 1 or 2
    }
    
}
