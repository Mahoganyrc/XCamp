//#include <iostream>
//#include <sstream>
//#include <vector>
//
//int maze[7][7];
//
//int sizeX;
//int sizeY;
//int shortestStepCount = 0;
//int amount = 1;
//std::vector<int> steps;
//bool reachedEnd = false;
//
//void findNumberOfPaths(int x, int y, int stepCount) {
//
//
//
//    if (x == (sizeX - 1) && y == (sizeY - 1)) {
//
//        steps.push_back(stepCount);
//        if (stepCount == shortestStepCount) {
//            amount++;
//        }
//
//        if (stepCount <= shortestStepCount) {
//            shortestStepCount = stepCount;
//            amount = 1;
//        }
//        reachedEnd = true;
//        return;
//    }
//    if (maze[x][y] > 0 ) {
//        return;
//    }
//
//    if (maze[x][y] == 1) {
//        return;
//    }
//
//    if (maze[x][y] == 2) {
//        return;
//    }
//    if (maze[x][y] == 0) {
//        maze[x][y] = 2;
//    }
//
//
//
//
//    if (x + 1 < sizeX) {
//        findNumberOfPaths(x + 1, y,stepCount+1);
//    }
//    if (y + 1 < sizeY) {
//        findNumberOfPaths(x, y + 1,stepCount+1);
//    }
//    if (x - 1 >= 0) {
//        findNumberOfPaths(x - 1, y,stepCount+1);
//    }
//    if (y - 1 >= 0) {
//        findNumberOfPaths(x, y - 1,stepCount+1);
//    }
//
//    maze[x][y] = 0;
//}
//
//
//
//int main() {
//    std::string input[1000];
//    int z = -3;
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -2) {
//            sizeX = n;
//        }
//        if (z == -1) {
//            sizeY = n;
//        }
//    }
//
//    z = 0;
//
//    for (int i = 0; i < sizeX; i++) {
//
//        for (int j = 0; j < sizeY; j++) {
//            if (input[i + 1][j] == '*') {
//                maze[i][j] = 0;
//            }else {
//                maze[i][j] = 1;
//            }
//        }
//    }
////    for (int i = 0; i < size; i++) {
////        std::stringstream ss(input[i + 1]);
////        for (int j = 0; j < size; j++) {
////            ss >> maze[i][j];
////        }
////    }
//    shortestStepCount = sizeX*sizeY;
//    findNumberOfPaths(0, 0,0);
//
//    for (int ij = 0; ij < steps.size(); ij++) {
//        if (steps[ij]==shortestStepCount) {
//            amount++;
//        }
//    }
//    amount--;
//
//    if (!reachedEnd) {
//        std::cout << "0" << std::endl;
//
//        return 0;
//    }
//
//    std::cout << steps.size() << std::endl;
//    //std::cout << shortestStepCount << std::endl;
//
//    return 0;
//}
