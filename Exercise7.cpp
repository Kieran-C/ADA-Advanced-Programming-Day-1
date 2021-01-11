//https://repl.it/@KieranCaruana/TypeCounter1

#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main() {
  std::string value;
  int i = 0;
  int pos = 0;
  int neg = 0;
  int zero = 0;
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
    if (numbersVec[i] < 0) {
      neg += 1;
    }else if (numbersVec[i] > 0){
      pos += 1;
    }else if (numbersVec[i] == 0){
      zero += 1;
    }
    i++;
  }
  std::cout << "\nTotal number of values entered: " << numbers.size();
  std::cout << "\nZeros:\t\t" << zero <<"\nPositives:\t" << pos << "\nNegatives:\t" << neg;
}
