#include <iostream>
#include <vector>
#include "candy_quest_functions.h"

void main_menu(int pointer_position_main) {
    std::string pointer = "<--";
    std::vector<std::string> options = {"🍡 Play Game", "🍡 Show Demo", "🍡 Quit"};
    std::cout << "\n🍰🍡🍭🍬🍫🍧🍦🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩" << std::endl;
    std::cout << "---- CANDY QUEST ----" << std::endl;
    for (int i = 0; i < options.size(); ++i) {
        if (i == pointer_position_main) {
            std::cout << options[i] << " " << pointer << std::endl;
        } else {
            std::cout << options[i] << std::endl;
        }
    }
    std::cout << "🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩🍰🍡🍭🍬🍫🍧🍦🍩\n" << std::endl;
}