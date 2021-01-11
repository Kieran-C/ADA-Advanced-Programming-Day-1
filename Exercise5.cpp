//https://repl.it/@KieranCaruana/RetirementCalculator#main.cpp

#include <iostream>

int getYear() {
  time_t now = time(0);
  tm *ltm = localtime(&now);
  int year;
  return (1900 + ltm->tm_year);
}

int main() {
  int year;
  int age;
  int difference;
  int retirementAge;
  year = getYear();
  std::cout << "Please enter your current age: ";
  std::cin >> age;
  std::cout << "\nPlease enter the age you would like to retire: ";
  std::cin >> retirementAge;
  difference = retirementAge - age;
  std::cout << "\nThe current year is " << year << " can retire in " << year + difference << " you have " << difference << " remaining"; 
}
