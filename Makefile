introductions.o: candy_quest_functions.h introductions.cpp
	g++ -pedantic-errors -std=c++11 -c introductions.cpp
print_with_delay.o: candy_quest_functions.h print_with_delay.cpp
	g++ -pedantic-errors -std=c++11 -c print_with_delay.cpp
print_candy_quest_art.o: candy_quest_functions.h print_candy_quest_art.cpp
	g++ -pedantic-errors -std=c++11 -c print_candy_quest_art.cpp
main.o: candy_quest_functions.h main.cpp
	g++ -pedantic-errors -std=c++11 -c main.cpp
main: introductions.o print_with_delay.o print_candy_quest_art.o main.o
	g++ -pedantic-errors -std=c++11 introductions.o print_with_delay.o print_candy_quest_art.o main.o -o main
clean:
	rm -f *.o main
.PHONY: clean
