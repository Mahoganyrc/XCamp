//#include <iostream>
//#include <sstream>
//#include <vector>
//
//int kValues[1000];
//int size;
//std::vector<int> answers;
//int floorEnd;
//int floorStart;
//bool visited[1000];
//
//void findPossible (int floor, int step) {
//
//    if (floor == (floorEnd-1)) {
//        answers.push_back(step);
//        return;
//    }
//
//    if (visited[floor]) {
//        return;
//    }
//
//    visited[floor] = true;
//
//    findPossible(floor + kValues[floor], step+1);
//    findPossible(floor - kValues[floor], step+1);
//
//    visited[floor] = false;
//
//
//
//
//}
//
//
//int main () {
//
//
//        std::cin >> size >> floorStart >> floorEnd;
//        int x;
//        for (int i = 0; i < size; i++) {
//            std::cin >> x;
//            kValues[i] = x;
//        }
//
//        findPossible(floorStart-1, 0);
//        int smallest = 99999999;
//        for (int i = 0; i < answers.size(); i++) {
//            if (answers.at(i) < smallest) {
//                smallest = answers.at(i);
//            }
//        }
//        if (smallest == 99999999) {
//            std::cout << -1 << std::endl;
//            return 0;
//        }
//        std::cout  << std::endl;
//        std::cout << smallest << std::endl;
//
//        return 0;
//}