////#include <iostream>
////#include <map>
////#include <vector>
////
////int main () {
////
////    std::map<int,int> test;
////    std::vector<int> input;
////    int size;
////    int result;
////    std::cin >> size >> result;
////    int x;
////
////    for (int i = 1; i <= size; i++) {
////        std::cin >> x;
////        input.push_back(x);
////        test.insert(std::pair<int,int> (result-x,i));
////
////    }
////
////    for (int i = 0; i < size; i++) {
////
////        if (test.count(input.at(i))) {
////            std::cout << i+1 << " " << test.at(input.at(i));
////            break;
////        }
////    }
////
////
////}
//
//#include <iostream>
//#include <map>
//#include <vector>
//
//int main () {
//    std::vector<int> nums;
//    int result;
//    int size;
//    int x;
//
//    std::cin >> size >> result;
//    for (int i = 0; i < size; i++) {
//        std::cin >> x;
//        nums.push_back(x);
//    }
//
//
//    std::map<int,int> test;
//
//    for (int i = 0; i < nums.size(); i++) {
//        test.insert(std::pair<int,int> (result-nums.at(i),i));
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (test.count(nums.at(i))) {
//            if (i == test.at(nums.at(i))) {
//                continue;
//            }
//            std::cout << i+1 << " ";
//            std::cout << test.at(nums.at(i))+1 << std::endl;
////            break;
//        }
//    }
//}