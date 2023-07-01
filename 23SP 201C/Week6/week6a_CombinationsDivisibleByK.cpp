//#include <iostream>
//#include <vector>
//
//int n;
//int k;
//std::vector<int> partial;
//
//int calc () {
//    int resultA = 0;
//    for (int i = 0; i < partial.size(); i++) {
//        resultA += partial.at(i);
//    }
//    return resultA;
//}
//void findPossible (int step) {
//    if (step == n) {
//        if (calc() % k == 0) {
//
//            for (int i = 0; i < partial.size(); i++) {
//                std::cout << partial.at(i) << " ";
//            }
//            std::cout << std::endl;
//        }
//        return;
//    }
//
//    for (int i = 1; i < n+1; i++) {
//        partial.push_back(i);
//        findPossible(step+1);
//        partial.pop_back();
//    }
//}
//
//int main () {
//    std::cin >> n >> k;
//    findPossible(0);
//
//}