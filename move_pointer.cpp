#include "candy_quest_functions.h"

void move_pointer(int& current_position, char direction){ // Move the pointer
    if (direction == 'W' && current_position > 0) 
        current_position -= 1;
    else if (direction == 'S' && current_position < 3) 
        (current_position += 1);
  
}
