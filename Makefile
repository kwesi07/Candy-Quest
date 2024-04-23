introductions.o: candy_quest_functions.h introductions.cpp
	g++ -pedantic-errors -std=c++11 -c introductions.cpp
instructions.o: candy_quest_functions.h instructions.cpp
	g++ -pedantic-errors -std=c++11 -c instructions.cpp
check.o: candy_quest_functions.h check.cpp
	g++ -pedantic-errors -std=c++11 -c check.cpp
confirm_quit.o: candy_quest_functions.h confirm_quit.cpp
	g++ -pedantic-errors -std=c++11 -c confirm_quit.cpp
main_menu.o: candy_quest_functions.h main_menu.cpp
	g++ -pedantic-errors -std=c++11 -c main_menu.cpp
exit_game.o: candy_quest_functions.h exit_game.cpp
	g++ -pedantic-errors -std=c++11 -c exit_game.cpp
mode_menu.o: candy_quest_functions.h mode_menu.cpp
	g++ -pedantic-errors -std=c++11 -c mode_menu.cpp
move_pointer.o: candy_quest_functions.h move_pointer.cpp
	g++ -pedantic-errors -std=c++11 -c move_pointer.cpp
print_with_delay.o: candy_quest_functions.h print_with_delay.cpp
	g++ -pedantic-errors -std=c++11 -c print_with_delay.cpp
print_candy_quest_art.o: candy_quest_functions.h print_candy_quest_art.cpp
	g++ -pedantic-errors -std=c++11 -c print_candy_quest_art.cpp
create_board.o: candy_quest_functions.h create_board.cpp
	g++ -pedantic-errors -std=c++11 -c create_board.cpp
print_board.o: candy_quest_functions.h print_board.cpp
	g++ -pedantic-errors -std=c++11 -c print_board.cpp
main.o: candy_quest_functions.h main.cpp
	g++ -pedantic-errors -std=c++11 -c main.cpp
main: introductions.o print_with_delay.o print_candy_quest_art.o main.o create_board.o print_board.o check.o move_pointer.o instructions.o
	g++ -pedantic-errors -std=c++11 introductions.o instructions.o print_with_delay.o print_candy_quest_art.o check.o move_pointer.o create_board.o print_board.o main.o -o main
# main: introductions.o print_with_delay.o print_candy_quest_art.o instructions.o main.o
# 	g++ -pedantic-errors -std=c++11 introductions.o instructions.o print_with_delay.o check.o move_pointer.o print_candy_quest_art.o main.o -o main
clean:
	rm -f *.o main
.PHONY: clean
