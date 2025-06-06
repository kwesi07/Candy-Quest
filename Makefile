#variables
CXX = g++
CXXFLAGS = -pedantic-errors -std=c++11

OBJS = introductions.o view_highscores.o remove_match.o write_highscores.o check_and_add_highscores.o highscore.o load_highscores.o clear_screen.o match_check.o drop.o fill.o make_move.o show_demo.o get_player_input.o play_game.o choose_game_mode.o instructions.o check.o confirm_quit.o main_menu.o exit_game.o mode_menu.o move_pointer.o print_with_delay.o print_candy_quest_art.o create_board.o print_board.o main.o


#pattern rule for .o files
%.o: %.cpp candy_quest_functions.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

#the main target
main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

#clean target
clean:
	rm -f $(OBJS) main

.PHONY: clean
