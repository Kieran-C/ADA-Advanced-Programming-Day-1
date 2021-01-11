//https://repl.it/@KieranCaruana/AreaOfARectangle#main.cpp
#include <iostream>

double area(double length, double width) {
  return length * width; 
}

double conversion(double areaFeet) {
  return areaFeet/10.7639104;
}

int main() {
  double length;
  double width;
  double areaFeet;

  std::cout << ("What is the length of the room in feet? ");
  std::cin >> length;

  std::cout << ("What is the width of the room in feet? ");
  std::cin >> width;

  std::cout << "\nYour room's dimension is " << length << " " << width << " feet, the area is:\n"; 
  areaFeet = area(length, width);
  std::cout << areaFeet << " square foot\n";
  std::cout << conversion(areaFeet) << " square meters";
}
