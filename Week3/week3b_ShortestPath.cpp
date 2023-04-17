//#include <iostream>
//#include <sstream>
//
//int maze[20][20];
//int stepCount;
//bool notFound = true;
//
//void findShortestPath (int x, int y,int size) {
//    if (x == (size-1) && y == (size-1)) {
//        notFound = false;
//        stepCount++;
//        std::cout << stepCount << std::endl;
//        return;
//    }
//    if (maze[x][y] == 1) {
//        return;
//
//    } else if (maze[x][y] == 2) {
//        stepCount--;
//        return;
//    } else if (maze[x][y] == 0) {
//        maze[x][y] = 2;
//        stepCount++;
//    }
//
//    if (x + 1 < size) {
//        findShortestPath(x + 1, y, size);
//    }
//    if (y + 1 < size) {
//        findShortestPath(x, y + 1, size);
//    }
//    if (x - 1 >= 0) {
//        findShortestPath(x - 1, y, size);
//    }
//    if (y - 1 >= 0) {
//        findShortestPath(x, y - 1, size);
//    }
//
//
//}
//
//
//int main () {
//    int size;
//    int x = 0;
//    int y = 0;
//
//    std::string input;
//    std::string fullInput[1000];
//    int z = -2;
//
//    for (int i = 0; std::getline(std::cin, input) && !input.empty(); i++) {
//        fullInput[i] = input;
//    }
//    std::stringstream ss(fullInput[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -1) {
//            size = n;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(fullInput[i+1]);
//        for (int j = 0; j < size; j++) {
//            ss >> maze[i][j];
//        }
//    }
//
//
//    findShortestPath(x,y,size);
//    if (notFound) {
//        std::cout << "-1" << std::endl;
//    }
//    return 0;
//}