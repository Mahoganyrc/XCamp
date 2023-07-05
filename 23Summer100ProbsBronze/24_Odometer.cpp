////#include <iostream>
////#include <sstream>
////
////long long x;
////long long y;
////
////long long testLL[] = {0,0,0,684,6084,54998,478528,4273097,35369897,306322977};
////
////std::string replaceAll(std::string str, long long from ) {
////
////    long long start = 0;
////    while ((start = str.find(std::to_string(from), start)) != std::string::npos) {
////        str.replace(start, from, "");
////    }
////    return str;
////}
////
////bool test (std::string input) {
////
////    for (int i = 1; i <= 9; i++) {
////        if (replaceAll(input, i).length() == 1) {
////            return true;
////        }
////    }
////    return false;
////}
////int main () {
////    long long count = 0;
////    std::cin >> x >> y;
////    for (int i = x; i <= y; i++) {
////
////        if (test(std::to_string(i))) {
////            count++;
////        }
////    }
////
////    std::cout << count;
////}
//
//#include <iostream>
//#include <sstream>
//#include <thread>
//
//long long x;
//long long y;
//
//long long testLL[] = {0,0,0,684,6084,54998,478528,4273097,35369897,306322977};
//
//std::string replaceAll(std::string str, long long from ) {
//
//    long long start = 0;
//    while ((start = str.find(std::to_string(from), start)) != std::string::npos) {
//        str.replace(start, from, "");
//    }
//    return str;
//}
//
//bool test (std::string input) {
//
//    for (int i = 1; i <= 9; i++) {
//        if (replaceAll(input, i).length() == 1) {
//            return true;
//        }
//    }
//    return false;
//}
//
//
//void helperThread () {
//
//}
//
//
//
//int main () {
//    long long count = 0;
//    std::cin >> x >> y;
//    for (int i = x; i <= y; i++) {
//
//        if (test(std::to_string(i))) {
//            count++;
//        }
//    }
//
//    std::cout << count;
//}