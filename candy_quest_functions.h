#ifndef CANDY_QUEST_FUNCTIONS_H
#define CANDY_QUEST_FUNCTIONS_H
#include <string>
#include <vector>
#include <map>
using namespace std;

void clear_screen();
void print_candy_quest_art();
void print_with_delay(const string& text);
void introductions();
void instructions();
vector<vector<string>> create_board(int size,const vector<string>& tiles);
void print_board(int size,const vector<vector<string>> board);
void make_move(int r, int c, char direction, vector<vector<string>>& board, int size);
int check(const vector<vector<string>>& board, int size);
void write_highscores(const vector<pair<string, int>>& highScores, const string& filename);
vector<pair<string, int>> load_highscores(const string& filename);
void check_and_add_highscore(int playerScore, vector<pair<string, int>>& highScores, int mode);
int match_check(vector<vector<string>> & board, int& score, int size);
void drop(vector<vector<string> >& board, int size);
void fill(vector<vector<string> >& board, int size);
void highscore(int playerScore, int mode);
int remove_match(vector<vector<string>>& board, int size);
void play_game(int mode, int &size);
void show_demo();
void main_menu(int pointer_position_main);
void mode_menu(int pointer_position_game);
void move_pointer(int & current_position, char direction);
void choose_game_mode(int & pointer_position_main, int & size);
bool confirm_quit();
void exit_game();
char get_player_input();
int remove_match(vector<vector<string>> & board, int size);
#endif

