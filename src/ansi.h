//header file for the colour codes of the entire game
#ifndef ANSI_H
#define ANSI_H

#include <string>

//colour coded constant strings
const std::string OFF = "\033[0m";
const std::string RED = "\033[31;1m"; 
const std::string WHI = "\033[38;5;206;48;5;57m";
const std::string PINK = "\033[38;5;199m";

const std::string TRY = "\033[38;2;3;65;75m"; 
const std::string PRINT = "\033[38;5;220m";

const std::string STATS = "\033[38;5;202m";
const std::string ENTER = "\033[38;5;10m";
const std::string INPUT = "\033[38;5;123m";


const std::string ALERT = "\033[38;5;196m";   // When the entered input is incorrect 

const std::string NAME = "\033[38;5;45m";

const std::string GOOD = "\033[38;5;91;48;5;122m";
const std::string CONSIDER = "\033[38;5;0;48;5;214m";

//To display the attacks in each turns
const std::string GUN = "Gunshot 'g': you can fire anytime\n";
const std::string SWORD = "Sword   's': you need at least 20 Mana\n";
const std::string MEDICAL = "Medical 'm': you can use when your health is less than 20 units\n";
const std::string SKIP = "SKip    'S': you can skip your move anytime\n";
const std::string CANON = "Canon   'c': needs 100 Mana to use" ;


#endif