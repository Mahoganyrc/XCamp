//#include <iostream>
//#include <string>
//#include <sstream>
//
//int maze[1000][1000];
//
//void testPossible(int x, int y, int size) {
//
//    if (maze[x][y] == 1 || maze[x][y] == 2) {
//        return;
//    }
//    if (maze[x][y] == 0) {
//        maze[x][y] = 2;
//    }
//
//    if (x-1 >= 0) {
//        testPossible(x-1,y,size);
//    }
//
//    if (x+1 < size) {
//        testPossible(x+1, y, size);
//    }
//
//    if (y-1 >= 0 ) {
//        testPossible(x, y-1, size);
//    }
//
//    if (y+1 < size) {
//        testPossible(x, y+1, size);
//    }
//
//}
//
//int main() {
//
//    int size;
//    int x;
//    int y;
//
//    int endX;
//    int endY;
//
//    std::string input;
//    std::string fullInput[1000];
//    int z = -6;
//
//    for (int i = 0; std::getline(std::cin, input) && !input.empty(); i++) {
//        fullInput[i] = input;
//    }
//    std::stringstream ss(fullInput[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -5) {
//            size = n;
//        } else if (z == -4) {
//            x = n;
//        } else if (z == -3) {
//            y= n;
//        }else if (z == -2) {
//            endX = n;
//        }else if (z == -1) {
//            endY = n;
//        }
//    }
//
//
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(fullInput[i+1]);
//        for (int j = 0; j < size; j++) {
//            ss >> maze[i][j];
//        }
//    }
//
//    testPossible(x,y,size);
//
//    if (maze[endX][endY] == 2) {
//        std::cout << "YES";
//    } else {
//        std::cout << "NO";
//    }
//
//    return 0;
//}
