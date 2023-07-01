//#include <iostream>
//#include <vector>
//
//bool canSum (int final, std::vector<int> numbers) {
//    if (final == 0) {
//        return true;
//    }
//
//    for (int i = 0; i < numbers.size(); i++) {
//        if (final >= numbers.at(i)) {
//            if (canSum(final-numbers.at(i),numbers)) {
//                return true;
//            }
//        }
//    }
//
//    return false;
//
//}
//
//
//int main () {
//    bool output = false;
//    int final;
//    int a;
//    std::vector<int> array;
//    std::cin >> final;
//    while (std::cin >> a && a != -1) {
//        array.push_back(a);
//    }
//    if (canSum(final,array)) {
//        std::cout << "CanSum = true" << std::endl;
//
//    }else {
//        std::cout << "CanSum = false" << std::endl;
//    }
//
//
//
//
//}
