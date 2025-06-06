#include <iostream>
#include "candy_quest_functions.h"
#include <string>


void choose_game_mode(int & pointer_position_main, int & size) {
    char player_input_game = 'N';
    while (player_input_game != 'Y') {
        main_menu(pointer_position_main);
        char player_input_main = get_player_input(); 
        move_pointer(pointer_position_main, player_input_main);
        if (player_input_main == 'Y') { // Check if player_input_main is equal to 'Y'
            if (pointer_position_main == 0) {
                int pointer_position_game = 0;
                while (true) {
                    mode_menu(pointer_position_game);
                    char player_input_mode = get_player_input();
                    move_pointer(pointer_position_game, player_input_mode); 
                    if (player_input_mode == 'Y') { 
                        if (pointer_position_game == 0) {
                            std::cout << "TARGET MODE: Try to reach 150 points!" << std::endl;
                            play_game(1, size); // Call play_game function with mode 1 and size for target mode
                            break;
                        } else if (pointer_position_game == 1) {
                            std::cout << "LIMITED MOVES MODE: Get the most points within 15 moves!" << std::endl;
                            play_game(2, size); // Call play_game function with mode 2 and size for limited moves mode
                            break;
                        } else if (pointer_position_game == 2) {
                            std::cout << "FREE TO PLAY MODE: Play as much as you want!" << std::endl;
                            play_game(3, size); // Call play_game function with mode 3 and size for free to play mode
                            break;
                        } else if (pointer_position_game == 3) {
                            std::cout << "View Highscores" << std::endl;
                            view_highscores(); // Call view_highscores function to view highscores
                            break;
                        }

                    }
                }
            } else if (pointer_position_main == 1) {
                show_demo(); // Call show_demo function to show demo
            } else if (pointer_position_main == 2) {
                exit_game(); // Call exit_game function to exit the game
                break;
            }
            //to restart the loop
            player_input_game = 'N';
        }
    }
}
