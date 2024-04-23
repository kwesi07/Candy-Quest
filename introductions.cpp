#include "candy_quest_functions.h"
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

void introductions() {
  cout << "**INCREASE YOUR TERMINAL FOR THE ULTIMATE EXPERIENCE**" << endl;
  cout << "Press Enter to continue..." << endl;
  cin.ignore();
  print_candy_quest_art();
  print_with_delay("\n🌌✨ WELCOME TO THE CANDY QUEST ADVENTURE! ✨🌌");
  print_with_delay("\nIn a world cloaked in sugar and mystery,");
  print_with_delay(
      "you, daring Candy Explorer, are on the brink of a daring quest!");
  print_with_delay("\nLegends whisper of a hidden treasure concealed in the "
                   "heart of the Candy Realm,");
  print_with_delay("guarded by an ancient puzzle - the CANDY QUEST! 🚀🍬");
  print_with_delay("\nBut beware, for the Candy Cruncher, a formidable "
                   "adversary, lies in wait.");
  print_with_delay("Only the bravest can unravel the puzzle and claim the sweet rewards within! 💪🍭");
  print_with_delay("\nThe air is thick with anticipation as you stand at the entrance of the Candy Kingdom.");
  print_with_delay("Your destiny awaits, concealed within the tantalizing mysteries of the sugar-coated maze.");
  print_with_delay(
      "\nAre you prepared to face the challenge, unravel the enigma,");
  print_with_delay("and emerge victorious as the ultimate Candy Crusher? 🌌🍫");
  print_with_delay(
      "\nBrace yourself for a journey filled with twists and turns,");
  print_with_delay("where every move could be your key to triumph or the path to a sugary demise. 🍬🔍");
  cout << "\n🫡👀 Play At Your Own Risk! 🫡👀" << endl;
  cout << "Press Enter to continue..." << endl;
  cin.ignore();
}
