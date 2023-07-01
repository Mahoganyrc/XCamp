//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cmath>
//#include <stack>
//
//
//int b;
//int e;
//
//int timeXXD = 1;
//std::queue<int> movementsB;
//std::queue<int> movementsE;
//
//std::stack <int> meet;
//int posB = 0;
//int posE = 0;
//
//int counter = 0;
//
//void timeIncrease () {
//    timeXXD++;
//
//    posB += movementsB.front();
//    posE += movementsE.front();
//
//    //std::cout << "Increasing time " << timeXXD << " | posB += " << movementsB.front() << " | posE += " << movementsE.front() << " | results b = " << posB << " e = " << posE << std::endl;
//
//    movementsB.pop();
//    movementsE.pop();
//
//    if (posB == posE) {
//
//        if (meet.top() != (timeXXD-1)) {
//            counter++;
//        }
//
//        meet.push(timeXXD);
//
//    }
//
//}
//
//
//
//int main () {
//    meet.push(1);
//    std::cin >> b >> e;
//
//    for (int i = 0; i < b; i++) {
//        char directionInput;
//        int timeInput;
//        std::cin >> timeInput >> directionInput;
//
//        for (int j = 0; j < timeInput; j++) {
//            if (directionInput == 'R') {
//                movementsB.push(1);
//            }else if (directionInput == 'L') {
//                movementsB.push(-1);
//            }
//
//        }
//    }
//
//    for (int i = 0; i < e; i++) {
//        char directionInput;
//        int timeInput;
//        std::cin >> timeInput >> directionInput;
//        for (int j = 0; j < timeInput; j++) {
//            if (directionInput == 'R') {
//                movementsE.push(1);
//            }else if (directionInput == 'L') {
//                movementsE.push(-1);
//            }
//
//        }
//    }
//
////    int xd = movementsB.size();
////    for (int i = 0; i < xd; i++) {
////        std::cout << movementsB.front() << " ";
////        movementsB.pop();
////    }
////    std::cout << std::endl;
////     xd = movementsE.size();
////    for (int i = 0; i < xd; i++) {
////        std::cout << movementsE.front() << " ";
////        movementsE.pop();
////    }
//
//
//    int x = movementsB.size()-movementsE.size();
//    if (movementsB.size() > movementsE.size()) {
//        for (int j = 0; j < abs(x); j++) {
//            movementsE.push(0);
//        }
//    }
//    if (movementsB.size() < movementsE.size()) {
//        for (int j = 0; j < abs(x); j++) {
//            movementsB.push(0);
//        }
//    }
//    x = movementsE.size();
//    for (int i = 0; i < x; i++) {
//        timeIncrease();
//    }
//
//    std::cout << counter << std::endl;
//
//
//}