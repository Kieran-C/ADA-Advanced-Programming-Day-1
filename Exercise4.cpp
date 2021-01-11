//https://repl.it/@KieranCaruana/OddsAndEvens#main.cpp
#include <iostream>

int main() {
  int value;
  std::cout << "Please enter a value: ";
  std::cin >> value;
  if (value%2 == 0) {
    std::cout << value << " is even";
  }else if (value%2 !=0) {
    std::cout << value << " is odd";
  }else {
    std::cout << "An error occured";
  }
}
