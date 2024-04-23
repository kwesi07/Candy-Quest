#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <chrono>
#include "candy_quest_functions.h"
using namespace std;


void print_candy_quest_art() {
    string art = R"(
    
       ▄████▄   ▄▄▄      ███▄    █ ▓█████▄▓██   ██▓     █████   █    ██ ▓█████   ██████ ▄▄▄█████▓
      ▒██▀ ▀█  ▒████▄    ██ ▀█   █ ▒██▀ ██▌▒██  ██▒   ▒██▓  ██▒ ██  ▓██▒▓█   ▀ ▒██    ▒ ▓  ██▒ ▓▒
      ▒▓█    ▄ ▒██  ▀█▄ ▓██  ▀█ ██▒░██   █▌ ▒██ ██░   ▒██▒  ██░▓██  ▒██░▒███   ░ ▓██▄   ▒ ▓██░ ▒░
      ▒▓▓▄ ▄██▒░██▄▄▄▄██▓██▒  ▐▌██▒░▓█▄   ▌ ░ ▐██▓░   ░██  █▀ ░▓▓█  ░██░▒▓█  ▄   ▒   ██▒░ ▓██▓ ░
      ▒ ▓███▀ ░ ▓█   ▓██▒██░   ▓██░░▒████▓  ░ ██▒▓░   ░▒███▒█▄ ▒▒█████▓ ░▒████▒▒██████▒▒  ▒██▒ ░
      ░ ░▒ ▒  ░ ▒▒   ▓▒█░ ▒░   ▒ ▒  ▒▒▓  ▒   ██▒▒▒    ░░ ▒▒░ ▒ ░▒▓▒ ▒ ▒ ░░ ▒░ ░▒ ▒▓▒ ▒ ░  ▒ ░░
        ░  ▒     ▒   ▒▒ ░ ░░   ░ ▒░ ░ ▒  ▒ ▓██ ░▒░     ░ ▒░  ░ ░░▒░ ░ ░  ░ ░  ░░ ░▒  ░ ░    ░
      ░          ░   ▒     ░   ░ ░  ░ ░  ░ ▒ ▒ ░░        ░   ░  ░░░ ░ ░    ░   ░  ░  ░    ░
      ░ ░            ░  ░        ░    ░    ░ ░            ░       ░        ░  ░      ░
        ░                             ░      ░ ░
        
        
        )";

    istringstream iss(art);
    string line;

    while (getline(iss, line)) {
        cout << line << endl;
        this_thread::sleep_for(chrono::milliseconds(200)); // Sleep for 200 milliseconds
    }
}



