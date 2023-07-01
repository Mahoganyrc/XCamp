//#include <iostream>
//
//std::string adjust (int x) {
//    std::string y = std::to_string(x);
//    switch (y.length()) {
//        case 1:
//            return "   " + y;
//        case 2:
//            return "  " + y;
//        case 3:
//            return " " + y;
//        case 4:
//            return  y;
//        default:
//            return y;
//    }
//
//}
//
//int main () {
//    int x;
//    int y = 1;
//    std::cin >> x;
//    for (int a = 0; a<x; a++) {
//        for (int b = 0; b<=a; b++) {
//            std::cout << adjust(y);
//            y++;
//        }
//        std::cout << "\n";
//    }
//
//
//}
