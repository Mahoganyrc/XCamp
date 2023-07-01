//#include <iostream>
//#include <vector>
//#include <string>
////#include <cmath>
////#include <algorithm>
//
//int inputN;
//int inputL;
//int inputI;
//bool forceQuit = false;
////int output[30];
////int test;
//
//std::vector<std::string> answers;
//
////void resetOutput () {
////    for (int i = 0; i < inputN; i++) {
////        output[i] = 0;
////    }
////}
////
////std::string reverse (int input) {
////
////
////    resetOutput();
////
////    for (int i = 0; i < inputN; i++) {
////        if (input < pow(2, i) ) {
////            test = i;
////        }
////    }
////
////
////    for (int i = 0; i < (test+1); i++) {
////
////
////        if (input >= pow(2, test-i)) {
////            input -= pow(2, test-i);
////
////            output[test-i] = 1;
////        }
////    }
////
////    std::string xd;
////    for (int i = 1; i < (inputN+1); i++) {
////
////        xd+= std::to_string(output[inputN-i]);
////    }
////
////    return xd;
////
////}
////
////
////
////int calculate (std::string input) {
////    int count = 0;
////    int x = input.length();
////    for (int i = 0; i < x; i++) {
////        if (input.back() == '1') {
////            count+= 1 * pow(2, i);
////        }
////            input.pop_back();
////    }
////
////    return count;
////}
////
////bool check (std::string input) {
////    int counter = input.length();
////    input.erase(std::remove(input.begin(), input.end(), '1'), input.end());
////    int counter2 = input.length();
////
////    if (counter-counter2 <= inputL) {
////        return true;
////    }else {
////        return false;
////    }
////
////}
//
//void findPossible (std::string partial, int step, int ones) {
//    if (forceQuit) {
//        return;
//    }
//
//    if (ones > inputL) {
//        return;
//    }
//
//
//    if (step == inputN) {
//        answers.push_back(partial);
//
//        if (answers.size() == inputI) {
//            forceQuit = true;
//            std::cout << (answers.at(inputI-1)) << std::endl;
//        }
//
//        return;
//    }
//
//
//    findPossible(partial + "0", step+1, ones);
//    findPossible(partial + "1", step+1, ones+1);
//}
//
//
//int main () {
//    std::cin >> inputN;
//    std::cin >> inputL;
//    std::cin >> inputI;
//
//    findPossible("", 0, 0);
//
////    for (int i = 0; i < pow(2, inputN); i++) {
////
////
////        if (check(reverse(i))) {
////            answers.push_back(reverse(i));
////
////        }
////
////    }
//
//    //std::cout << answers.at(inputI-1) << std::endl;
//
//}
