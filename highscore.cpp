#include <vector>
#include <string>
#include <iostream>
#include "candy_quest_functions.h"
using namespace std;

void highscore(int playerScore) {
    vector<pair<string, int>> highScores = load_highscores("highscore.txt");
    check_and_add_highscore(playerScore, highScores);

    // Print the high scores
    for (size_t i = 0; i < highScores.size(); ++i) {
        cout << "Rank " << i + 1 << ": " << highScores[i].first << " with score " << highScores[i].second << endl;
    }

    write_highscores(highScores, "highscore.txt");
}