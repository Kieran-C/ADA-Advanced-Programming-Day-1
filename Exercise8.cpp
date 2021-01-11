//https://repl.it/@KieranCaruana/TypeCounter1

#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main() {
  std::string value;
  int i = 0;
  int large = 0;
  int small = 0;
  std::cout << "Please enter a valid numeric, or 'Q' to finish:\n";
  std::list<int> numbers;
  while (true) {
    getline(std::cin, value);
    if (value == "q" || value == "Q"){
      break;
    }
    numbers.push_front(std::stoi(value));
  }
  std::vector<int> numbersVec(numbers.begin(), numbers.end());
  while(i < numbers.size()) {
    if (numbersVec[i] < small) {
      small = numbersVec[i];
    }
    if (numbersVec[i] > large){
      large = numbersVec[i];
    }
    i++;
  }
  std::cout << "\nTotal number of values entered: " << numbers.size();
  std::cout << "\nLowest Value:\t\t" << small <<"\nLargest Value:\t" << large;
}
