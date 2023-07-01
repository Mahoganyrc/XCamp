//#include <iostream>
//
//long long partial[100000000];
//int size;
//
//long long findPossible (int step) {
//
//    partial[0] = 1;
//    partial[1] = 1;
//    partial[2] = 2;
//
//    for (int i = 3; i <= size; i++) {
//       partial[i] = partial[i-1] + partial[i-2] + partial[i-3];
//    }
//
//
//    return partial[step];
//
//}
//
//
//int main () {
//
//    std::cin >> size;
//    //findPossible(size);
//
//    std::cout << std::to_string( findPossible(size) % 998244353);
//
////    for (int i = 0; i < size; i++) {
////        std::cout << "skull = " << partial[i] << std::endl;
////    }
//}
