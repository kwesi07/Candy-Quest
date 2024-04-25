#include "candy_quest_functions.h"

int move_pointer(int current_position, char direction) {
    if (direction == 'W' && current_position > 0) {
        return (current_position - 1);
    } else if (direction == 'S' && current_position < 2) {
        return (current_position + 1);
    } else {
        return current_position;
    }
}