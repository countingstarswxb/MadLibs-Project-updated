#include <iostream>
#include <string>

int main()
{   
    std::cout << "Let's play a Madlibs game. Everytime, please input one word. However, if you would like input two words or more words on each input, please no space between words. \n";
    std::cout << "Please give me a holiday: ";
    std::string holiday;
    std::cin >> holiday;

    std::cout << "Please give me a noun: ";
    std::string noun;
    std::cin >> noun;

    std::cout << "Please give me a place: ";
    std::string place;
    std::cin >> place;

    std::cout << "Please give me a person: ";
    std::string person;
    std::cin >> person;

    std::cout << "Please give me an adjective: ";
    std::string adjective;
    std::cin >> adjective;

    std::cout << "Please give me a body part(plural): ";
    std::string bodypart;
    std::cin >> bodypart;

    std::cout << "Please give me a verb: ";
    std::string verb;
    std::cin >> verb;

    std::cout << "Please give me an another adjective: ";
    std::string anotheradjective;
    std::cin >> anotheradjective;

    std::cout << "Please give me an another noun: ";
    std::string anothernoun;
    std::cin >> anothernoun;

    std::cout << "Please give me a food: ";
    std::string food;
    std::cin >> food;

    std::cout << "Please give me a plural noun: ";
    std::string pluralnoun;
    std::cin >> pluralnoun;
    std::cout << "\n";

    std::cout << "I can't believe it's already " << holiday << "! I can't wait to put on my " << noun << " and visit every " << place << " in my neighborhood. This year, I'm going to dress up as (a) " << person << " with " << adjective <<" " << bodypart << ". Before I " << verb << ", I make sure to grab my " << anotheradjective << " " << anothernoun << " to hold all of my " << food << ". Finally, all of my " << pluralnoun << " are ready to go!\n" ;
    std::cout << "\n";
    std::cout << "Thank you for participating the game!\n";
    std::cout << " ";

    return 0;



}