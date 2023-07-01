//#include <iostream>
//#include <sstream>
//
//long long x;
//long long y;
//
//std::string replaceAll(std::string str, int from ) {
//
//    int start = 0;
//    while ((start = str.find(std::to_string(from), start)) != std::string::npos) {
//        str.replace(start, 1, "");
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