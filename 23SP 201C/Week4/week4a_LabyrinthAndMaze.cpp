//#include <iostream>
//#include <sstream>
//#include <vector>
//
//int maze[51][51];
//
//int size;
//int shortestStepCount = 0;
//int amount = 1;
//std::vector<int> steps;
//bool reachedEnd = false;
//
//void findNumberOfPaths(int x, int y, int stepCount) {
//
//
//
//    if (x == (size - 1) && y == (size - 1)) {
//        if (maze[x][y] > 0 ) {
//            return;
//        }
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
//    if (x + 1 < size) {
//        findNumberOfPaths(x + 1, y,stepCount+1);
//    }
//    if (y + 1 < size) {
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
//
//    int x = 0;
//    int y = 0;
//
//    std::string input[1000];
//    int z = -2;
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -1) {
//            size = n;
//        }
//    }
//
//    z = 0;
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(input[i + 1]);
//        for (int j = 0; j < size; j++) {
//            ss >> maze[i][j];
//        }
//    }
//    shortestStepCount = size*size;
//    findNumberOfPaths(x, y,1);
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
//        std::cout << "0" << std::endl;
//        return 0;
//    }
//
//    std::cout << amount << std::endl;
//    std::cout << shortestStepCount << std::endl;
//
//    return 0;
//}
