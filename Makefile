introductions.o: candy_quest_functions.h introductions.cpp
	g++ -pedantic-errors -std=c++11 -c introductions.cpp
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
main: introductions.o print_with_delay.o print_candy_quest_art.o main.o create_board.o print_board.o
	g++ -pedantic-errors -std=c++11 introductions.o print_with_delay.o print_candy_quest_art.o create_board.o print_board.o main.o -o main
clean:
	rm -f *.o main
.PHONY: clean
