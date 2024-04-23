#include <iostream>
#include "candy_quest_functions.h"
#include <string>


void choose_game_mode(int & pointer_position_main, int & size) {
    pointer_position_main = 0;
    char player_input_game = 'N';
    while (player_input_game != 'Y') {
        main_menu(pointer_position_main);
        char player_input_main = get_player_input();
        move_pointer(pointer_position_main, player_input_main);
        if (player_input_main == 'Y') {
            if (pointer_position_main == 0) {
                int pointer_position_game = 0;
                while (true) {
                    mode_menu(pointer_position_game);
                    char player_input_game = get_player_input();
                    move_pointer(pointer_position_game, player_input_game);
                    if (player_input_game == 'Y') {
                        if (pointer_position_game == 0) {
                            cout << "TARGET MODE: Try to reach 150 points!" << endl;
                            play_game(1,size);
                            break;
                        } else if (pointer_position_game == 1) {
                            cout << "LIMITED MOVES MODE: Get the most points within 15 moves!" << endl;
                            play_game(2,size);
                            break;
                        } else if (pointer_position_game == 2) {
                            cout << "FREE TO PLAY MODE: Play as much as you want!" << endl;
                            play_game(3,size);
                            break;
                        }
                    }
                }
            } else if (pointer_position_main == 1) {
                show_demo();
            } else if (pointer_position_main == 2) {
                exit_game();
                break;
            }
            //to restart the loop
            player_input_game = 'N';
        }
    }
}
