#ifndef CANDY_QUEST_FUNCTIONS_H
#define CANDY_QUEST_FUNCTIONS_H

#include <string>
#include <vector>
using namespace std;

void print_candy_quest_art();
void print_with_delay(const string &text);
void introductions();
void instructions();
vector<vector<string>> create_board(int size,const vector<string>& tiles);
void print_board(int size,const vector<vector<string>> board);
void makeMove(int r, int c, char direction, vector<vector<string>>& board);
int check(const vector<vector<string> >& board, int size);
void matchcheck(vector<vector<string> >& board, int& score);
void drop(vector<vector<string> >& board);
void fill(vector<vector<string> >& board, const vector<string>& tiles);
void playgame(int mode);
void create_demo_board(vector<vector<string> >& board);
void show_demo();
void main_menu(int pointer_position_main);
void mode_menu(int pointer_position_game);
int move_pointer(int current_position, char direction);
void choose_game_mode();
void start_game();
bool confirm_quit();
void exit_game();

#endif

