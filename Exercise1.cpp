#include <iostream>

int main() {
	std::string quote; //Set up string var for quote
	std::string author; //Set up string var for author

	std::cout << "What is the quote? "; //Outputs string to console
	getline(std::cin, quote); //Gets user input from console and saves it to quote var

	std::cout << "Who said it? "; //Outputs string to console
	getline(std::cin, author); //Gets user input from console and saves it to a quote var

	std::cout << "\n" << author << " says: \"" << quote << "\"\n"; //Outputs quote var and author var formatted to console

	return 0; //returns 0
}
