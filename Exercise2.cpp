// https://repl.it/@KieranCaruana/FahrenheitCentigradeConversion#main.cpp
#include <iostream>

double toCentigrade(double startTemp) {
  double centigrade;
  centigrade = ((startTemp-32)*5/9);
  return centigrade;
}

double toFahrenheit(double startTemp) {
  double fahrenheit;
  fahrenheit = ((startTemp*9/5)+32);
  return fahrenheit;
}

int main() {
  double startTemp;
  std::string choice;
  std::cout << "Please enter a starting temprature: ";
  std::cin >> (startTemp);

  std::cout << "Press 'C' to convert from Fahrenheit to Centigrade.\n";
  std::cout << "Press 'F' to convert from Centigrade to Fahrenheit.\n";

  std::cin >> (choice);

  std::cout << "\nYou choice: " << choice;

  if ((choice == "c") || (choice == "C")) {
    std::cout << "\n" << startTemp << " Fahrenheit is "<< toCentigrade(startTemp) << " Celsius";
    return 0;
  }else if ((choice == "f") || (choice == "F")) {
    std::cout << "\n" << startTemp << " Celsius is "<< toFahrenheit(startTemp) << " Fahrenheit";
    return 0;
  }else{
    std::cout << "\nAn error occured";
    return 1;
  }
}

