#include <vector>
#include <string>
#include <iostream>
#include "candy_quest_functions.h"
using namespace std;

void highscore(int playerScore, int mode) {
    if (mode == 1) {
        vector<pair<string, int>> highScores = load_highscores("move_highscore.txt");
        check_and_add_highscore(playerScore, highScores, mode);
        for (size_t i = 0; i < highScores.size(); ++i) {
            cout << "Rank " << i + 1 << ": " << highScores[i].first << " with moves " << highScores[i].second << endl;
        }
        write_highscores(highScores, "move_highscore.txt");
    }
    else if (mode == 2) {
        vector<pair<string, int>> highScores = load_highscores("ltd_moves_highscore.txt");
        check_and_add_highscore(playerScore, highScores, mode);
        for (size_t i = 0; i < highScores.size(); ++i) {
            cout << "Rank " << i + 1 << ": " << highScores[i].first << " with score " << highScores[i].second << endl;
        }
        write_highscores(highScores, "ltd_time_highscore.txt");
    }
    else if (mode == 3) {
        vector<pair<string, int>> highScores = load_highscores("non_ltd_moves_highscore.txt");
        check_and_add_highscore(playerScore, highScores, mode);
        for (size_t i = 0; i < highScores.size(); ++i) {
            cout << "Rank " << i + 1 << ": " << highScores[i].first << " with score " << highScores[i].second << endl;
        }

        write_highscores(highScores, "non_ltd_time_highscore.txt");
    }
    else {
        cout << "Invalid mode" << endl;
        return;
    }
    
}
