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
    // Sort highScores in descending order
    bool found = false;
    if (mode == 1) { // Mode 1 is Target Mode
        for (auto it = highScores.begin(); it != highScores.end(); ++it) {
            if (it->second > playerScore) {
                // Insert the new high score
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
        if (!found && highScores.size() < 10) { // If the player's score is not higher than any of the existing high scores
            // Insert the new high score
            string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
            if (!playerName.empty()) {
                highScores.push_back(make_pair(playerName, playerScore));
            } else {
                cout << "Invalid input. Please enter your name.\n";
            }
        }

        if (highScores.size() > 10) { // If there are more than 10 high scores, remove the lowest one
            highScores.pop_back();
        }
    }
    else if (mode == 2 || mode == 3) { // Mode 2 is Limited Moves, Mode 3 is infinite mode
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
            // Insert the new high score
            string playerName = getPlayerInput("Congratulations! You've got a high score. Please enter your name: ");
            if (!playerName.empty()) {
                highScores.push_back(make_pair(playerName, playerScore));
            } else {
                cout << "Invalid input. Please enter your name.\n";
            }
        }

        if (highScores.size() > 10) { // If there are more than 10 high scores, remove the lowest one
            highScores.pop_back();
        }
    }
    else { // Invalid mode
        cout << "Invalid mode" << endl;
        return;
    }
}
