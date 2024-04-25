#include <cstdlib> // For system function
#include "candy_quest_functions.h"


void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    // Assume Unix-like system
    system("clear");
#endif
}
