//https://repl.it/@KieranCaruana/karvonenFormular#main.cpp
#include <iostream>

int kForm(int age, int resting, double intensity) {
  return (((220 - age) - resting ) * (intensity/100)) + resting;
}

int main() {
  int age;
  int restingPulse;
  double intensity = 40;

  std::cout << "Please enter your age: ";
  std::cin >> age;
  std::cout << "Please enter your resting pulse: ";
  std::cin >> restingPulse;

  std::cout << "\nResting Pulse: " << restingPulse << "\tAge: " << age << "\n";

  std::cout << "\nIntensity\t\tRate";
  std::cout << "\n---------------------------";
  
  do {
    std::cout << "\n" << intensity << "%\t\t\t\t" << kForm(age,restingPulse, intensity) << " bpm";
    intensity += 5;
  }while (intensity <= 95);
}
