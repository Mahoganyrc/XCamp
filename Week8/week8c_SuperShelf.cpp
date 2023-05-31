//#include <iostream>
//#include <vector>
//#include <sstream>
//
//int amountOfCows;
//int bookShelfHeight;
//int cowHeights[21];
//int height = 1000001;
//
//const int VISITED = -1;
//
//void findCows(int currentHeight) {
//
//    if (currentHeight > bookShelfHeight) {
//        if (currentHeight < height) {
//            height = currentHeight;
//        }
//        return;
//    }
//
//    for (int i = 0; i < amountOfCows; i++) {
//
//        if (cowHeights[i] > 0) {
//            cowHeights[i] = cowHeights[i] * VISITED;
//            findCows(currentHeight + (cowHeights[i] * VISITED));
//            cowHeights[i] = cowHeights[i] * VISITED;
//        }
//
//    }
//
//
//
//
//}
//
//
//int main () {
//    std::cin >> amountOfCows;
//    std::cin >> bookShelfHeight;
//    for (int i = 0; i < amountOfCows; i ++) {
//        std::cin >> cowHeights[i];
//    }
//
//    findCows(0);
//    std::cout  << (height-bookShelfHeight) << std::endl;
//}