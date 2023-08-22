//#include <iostream>
//
//
//int cow[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
//int main () {
//    int size;
//    std::cin >> size;
//
//    int pos;
//    int side;
//    int count = 0;
//
//    for (int i = 0; i < size; i++) {
//        std::cin >> pos >> side;
//        if (cow[pos] == -1) {
//            cow[pos] = side;
//        }else if (cow[pos] != side) {
//            cow[pos] = side;
//            count++;
//        }
//    }
//
//    std::cout << count << std::endl;
//}