//https://repl.it/@KieranCaruana/CharacterType#main.cpp
#include <iostream>

int main() {
  std::string value;
  int ascii;
  std::string cont;
  while (true){
    std::cout << "Please enter a character: ";
    std::cin >> value;
    ascii = static_cast<int>(value[0]);
    if ((ascii >=48) && (ascii <= 57)){
      std::cout << "Digit detected";
    }else if (((ascii >= 65)&&(ascii <= 90))||((ascii >= 97)&&(ascii <= 122))){
      std::cout << "Letter Detected";
    }else {
      std::cout << "Special Character Detected";
    }
    std::cout << "\n\nDo you want to continue? Y/N ";
    std::cin >> cont;
    if ((cont == "N") || cont == "n"){
      break;
    }
  }
}
