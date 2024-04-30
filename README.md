Team Members
- Zheng Runhao ( Contributor tag - 30049038; UID - 3036271540)
- Kwesi Owusu-Ofori ( Contributor tag - kwesi07, Owusu-ofori Kwesi, Kwesi Owusu-Ofori; UID - 3036259267)

GAME
Name: Candy Quest
Description:
This is a text-based game coded in c++ which took inspiration from Candy Crush. The game comprises of three game modes; Target mode, Limited Moves mode, and Free to Play mode.
- In Target mode, the goal is to a certain number of points with the least number of moves.
- In Limited Moves mode, the goal is to get the most number of points you can within a limited number of moves.
- In Free to Play mode, there is no restriction you can make as many swaps and matches as you want.
  
Game Rules:
- Swaps can be made regardless of whether that swap results in a match or not.
- Choose the size of the board which ranges from a 5x5 board to a 10x10 board.
- To swap candy, input the the location of the candy you want to swap and the direction of the swap separated by space.
   Example: If the candy is in row 1, column 2, and you want to swap it down, enter: 1 2 S
- To quit the game, input 'Q' in place of the direction.

Features of game:
- In the "create_board" function, it initializes a random number generator (`mt19937`) with a seed from a random device and creates a uniform distribution for generating random indices within a range from 0 to the size of the `tiles` vector minus one. This is done to attain a randomised placement of candy in the board.
- In the "create_board" function, a vector (STL container) was used to store the status of the game board during the playing of the game. It was passed by reference to the required functions to achieve this.
- We have implemented a high-score sheet which stores the scores of the players' names with their attained score from highest to lowest. We have implemented this using File input/output to store highscores in a txt file.
- The different functions used in the code are all stored in different files. And have used separate compilation and linking of their objects files to one executable(main).
  

Compilation and Execution Process
- In the terminal type the command 'make' and press enternto generate the object files for the functions and link them together to for the executable 'main'.
- Run 'main' by typing './main' in the terminal and pressing enter.
- If there is a problem running 'make', run 'make clean' first then run 'make' again(by run; type the command and press enter)
- Follow instructions in the game for gameplay and rules.
