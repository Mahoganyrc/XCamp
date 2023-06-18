// #include <iostream>

// #include <vector>
// #include <algorithm>

// int input;
// int length;
// std::vector<int> digits;


// int removeZeros (std::string str);

// void findNumbers (int i, int number, std::string currentString) {

//   if (i < length) {
//       currentString += std::to_string(number);
//       findNumbers(i + 1, 0, currentString);
//       findNumbers(i + 1, 1, currentString);

//   }


//   if (currentString.length() == length && removeZeros(currentString) <= input && removeZeros(currentString) > 0) {
//      digits.push_back(removeZeros(currentString));
//   }

// }


// int removeZeros (std::string str) {

//   int i;
//   for (i = 0; i < str.length(); i++) {
//       if (str[i] == '1') {
//           break;
//       }

//       if (str[i] == '0') {
//           str.erase(i,1);
//           i--;
//       }
//   }
//   if (str.length() == 0) {
//       str = "0";
//   }

//   i = std::stoi(str);
//   return i;

// }

// int main() {


//   std::cin >> input;

//   std::string str = std::to_string(input);
//   length = str.length();

//   findNumbers(0,0,"");
//   findNumbers(0,1,"");

//   sort(digits.begin(), digits.end() );
//   digits.erase( unique( digits.begin(), digits.end() ), digits.end() );
//   std:: cout << digits.size() << std::endl;


//   return 0;
// }