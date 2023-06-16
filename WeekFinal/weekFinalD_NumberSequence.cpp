//#include <iostream>
//#include <regex>
//#include <sstream>
//#include <vector>
//int size;
//std::vector<std::string> answers;
//
//int evaluate (std::string math) {
//
//    std::regex r("\\s+");
//    std::regex r0("\\d+");
//
//    math = std::regex_replace(math, r, "");
//
//    std::stringstream ss(math);
//    int n;
//    int abc = 0;
//    int numbers[size];
//
//    while (ss >> n) {
//        if (n < 0) {
//            n = n * -1;
//        }
//        numbers[abc] = n;
//        abc++;
//    }
//
//    math = std::regex_replace(math, r0, "");
//    math = "+" + math;
//
//
//    int total = 0;
//
//
//    for (int i = 0; i < math.length(); i++) {
//        if (math[i] == '+') {
//            total += numbers[i];
//
//        } else if (math[i] == '-') {
//            total -= numbers[i];
//
//        } else if (math[i] == '*') {
//
//        }
//    }
//
//    return total;
//}
//void findSequence(std::string math , int step) {
//
//    if (step == size && evaluate(math) == 0) {
//        answers.push_back(math);
//        return;
//    }
//
//    if (step == size) {
//        return;
//    }
//    findSequence(math + " " + std::to_string(step+1), step+1);
//    findSequence(math + "+" + std::to_string(step+1), step+1);
//    findSequence(math + "-" + std::to_string(step+1), step+1);
//
//
//
//}
//
//int main () {
//    std::cin >> size;
//
//    findSequence("1", 1);
//
//    for (int i = 0; i < answers.size(); i++) {
//        std::cout << answers[i] << std::endl;
//    }
//
//}
