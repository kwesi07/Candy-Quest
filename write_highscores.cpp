#include <fstream>
#include <iostream>
using namespace std;
#include "candy_quest_functions.h"

void write_highscores(const vector<pair<string, int>>& highScores, const string& filename) { //function to write highscores to file
    ofstream file(filename);

    if (file.is_open()) { //if file is open write highscores to file
        for (const auto& pair : highScores) {
            file << pair.first << " " << pair.second << "\n";
        }
        file.close();
    } else { //if file is not open print error message
        cout << "Unable to open file: " << filename << endl;
    }
}
