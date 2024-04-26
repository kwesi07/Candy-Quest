#include <vector>
#include <string>
#include <algorithm>
#include "candy_quest_functions.h"
#include <iostream>
using namespace std;


string getPlayerInput(const string& prompt) {
    cout << prompt;
    string input;
    getline(cin, input);
    return input;
}


void check_and_add_highscore(int playerScore, vector<pair<string, int>>& highScores) {
    auto lowestScoreIter = min_element(highScores.begin(), highScores.end(),
        [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
        });

    if (highScores.size() < 10 || playerScore > lowestScoreIter->second) {
        string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
        highScores.push_back({playerName, playerScore});
        if (highScores.size() > 10) {
            highScores.erase(lowestScoreIter);
        }

        // Sort the high scores in descending order
        sort(highScores.begin(), highScores.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second;
        });
    }
}