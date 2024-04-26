#include <vector>
#include <string>
#include <algorithm>
#include "candy_quest_functions.h"
#include <iostream>
using namespace std;


string getPlayerInput(const string& prompt) {
    cout << prompt;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore leftover newline
    string input;
    getline(cin, input);
    return input;
}


void check_and_add_highscore(int playerScore, vector<pair<string, int>>& highScores, int mode) {
    bool found = false;
    if (mode == 1) {
        for (auto it = highScores.begin(); it != highScores.end(); ++it) {
            if (it->second > playerScore) {
                string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
                if (!playerName.empty()) {
                    highScores.insert(it, make_pair(playerName, playerScore));
                    found = true;
                    break;
                } else {
                    cout << "Invalid input. Please enter your name.\n";
                }
            }
        }

        if (!found && highScores.size() < 10) {
            string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
            if (!playerName.empty()) {
                highScores.push_back(make_pair(playerName, playerScore));
            } else {
                cout << "Invalid input. Please enter your name.\n";
            }
        }

        if (highScores.size() > 10) {
            highScores.pop_back();
        }
    }
    else if (mode == 2 || mode == 3) {
        for (auto it = highScores.begin(); it != highScores.end(); ++it) {
            if (it->second < playerScore) {
                string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
                if (!playerName.empty()) {
                    highScores.insert(it, make_pair(playerName, playerScore));
                    found = true;
                    break;
                } else {
                    cout << "Invalid input. Please enter your name.\n";
                }
            }
        }

        if (!found && highScores.size() < 10) {
            string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
            if (!playerName.empty()) {
                highScores.push_back(make_pair(playerName, playerScore));
            } else {
                cout << "Invalid input. Please enter your name.\n";
            }
        }

        if (highScores.size() > 10) {
            highScores.pop_back();
        }
    }
    else {
        cout << "Invalid mode" << endl;
        return;
    }
}
