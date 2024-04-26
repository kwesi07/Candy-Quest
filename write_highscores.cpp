#include <fstream>
#include <iostream>
using namespace std;
#include "candy_quest_functions.h"

void write_highscores(const vector<pair<string, int>>& highScores, const string& filename) {
    ofstream file(filename);

    if (file.is_open()) {
        for (const auto& pair : highScores) {
            file << pair.first << " " << pair.second << "\n";
        }
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}