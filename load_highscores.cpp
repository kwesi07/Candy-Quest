#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

vector<pair<string, int>> load_highscores(const string& filename) {
    vector<pair<string, int>> highScores;
    ifstream file(filename);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string name;
            int score;
            if (!(iss >> name >> score)) { break; } // error
            highScores.push_back({name, score});
        }
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }

    sort(highScores.begin(), highScores.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    return highScores;
}