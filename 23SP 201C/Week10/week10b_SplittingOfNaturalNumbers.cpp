//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//#include <string>
//
//int size;
//std::vector<std::string> answers;
//
//int calc (std::string input) {
//
//    int result = 0;
//    std::replace( input.begin(), input.end(), '+', ' ');
//    int n;
//    std::stringstream ss(input);
//    while (ss >> n) {
//        result +=n;
//    }
//
//    return result;
//
//}
//
//void findPossible (std::string partial, int step) {
//
//    if (calc(partial) > size) {
//        return;
//    }
//    if (calc(partial) == size) {
//        answers.push_back(partial);
//        return;
//    }
//
//    for (int i = step-1; i < size; i++) {
//        findPossible(partial + "+" + std::to_string(i+1), i+1);
//    }
//
//
//
//}
//
//
//
//
//int main () {
//    std::cin >> size;
//
//    for (int i = 0; i < size-1; i++) {
//        findPossible(std::to_string(i+1), i+1);
//    }
//
//    for (int i = 0; i < answers.size(); i++) {
//        std::cout << size << "=" <<answers.at(i) << std::endl;
//    }
//
//
//}