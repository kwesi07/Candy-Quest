#include <iostream>
#include <vector>
#include "candy_quest_functions.h"

void mode_menu(int pointer_position_game) {
    std::string pointer = "<--";
    clear_screen();
    std::vector<std::string> modes = {"🍬 Target Score Mode", "🍧 Limited Moves Mode", "🍦 Free To Play Mode"};
    std::cout << "\n🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩" << std::endl;
    for (int i = 0; i < modes.size(); ++i) {
        if (i == pointer_position_game) {
            std::cout << modes[i] << " " << pointer << std::endl;
        } else {
            std::cout << modes[i] << std::endl;
        }
    }
    std::cout << "🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩\n" << std::endl;
}