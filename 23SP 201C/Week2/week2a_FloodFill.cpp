//#include <iostream>
//#include <string>
//#include <sstream>
//
//void testPossible(int maze[1000][1000], int x, int y, int size) {
//
//    if (maze[x][y] == 1 || maze[x][y] == 2) {
//        return;
//    }
//    if (maze[x][y] == 0) {
//        maze[x][y] = 2;
//
//    }
//    if (x-1 >= 0) {
//        testPossible(maze, x-1, y, size);
//    }
//
//    if (x+1 < size) {
//        testPossible(maze, x+1, y, size);
//    }
//
//    if (y-1 >= 0 && x-1 >=0) {
//        testPossible(maze, x-1, y-1, size);
//    }
//
//    if (y+1 < size && x+1 < size) {
//        testPossible(maze, x+1, y+1, size);
//    }
//
//}
//
//int main() {
//    int maze[1000][1000];
//    int size;
//    int startX;
//    int startY;
//
//    std::string input;
//    std::string fullInput[1000];
//    int z = -4;
//
//    for (int i = 0; std::getline(std::cin, input) && !input.empty(); i++) {
//        fullInput[i] = input;
//    }
//    std::stringstream ss(fullInput[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -3) {
//            size = n;
//        } else if (z == -2) {
//            startX = n;
//        } else if (z == -1) {
//            startY = n;
//        }
//    }
//
//    z = 0;
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(fullInput[i+1]);
//        for (int j = 0; j < size; j++) {
//            ss >> maze[i][j];
//        }
//    }
//    z = 0;
//    testPossible(maze, startX, startY, size);
//    for (int x = 0; x<size; x++) {
//        for (int y = 0; y < size; y++)  {
//            if (maze[x][y] == 2) {
//                z++;
//            }
//        }
//    }
//    std::cout << z;
//    return 0;
//}
