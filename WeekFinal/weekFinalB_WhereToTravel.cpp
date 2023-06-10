//#include <iostream>
//#include <sstream>
//#include <regex>
//
//int size;
//int maze[10][10];
//int startX;
//int startY;
//int stepM = 999;
//int stepB = 999;
//
//
//const int EMPTY = 0;
//const int FILLED = 1;
//const int BEACH = 2;
//const int MOUNTAIN = 3;
//const int VISITED = 4;
//
//void travel (int x, int y, int step) {
//
//    if (maze[x][y] == FILLED) {
//        return;
//    }
//    if (maze[x][y] == VISITED) {
//        return;
//    }
//    if (maze[x][y] == BEACH) {
//        if (step < stepB) {
//            stepB = step;
//        }
//        return;
//    }
//    if (maze[x][y] == MOUNTAIN) {
//        if (step < stepM) {
//            stepM = step;
//        }
//        return;
//    }
//
//    if (maze[x][y] == EMPTY) {
//        maze[x][y] = VISITED;
//    }
//
//    if (x + 1 < size) {
//        travel(x + 1, y, step + 1);
//    }
//    if (y + 1 < size) {
//        travel(x, y + 1, step + 1);
//    }
//    if (x - 1 >= 0) {
//        travel(x - 1, y, step + 1);
//    }
//    if (y - 1 >= 0) {
//        travel(x, y - 1, step + 1);
//    }
//
//    maze[x][y] = EMPTY;
//
//}
//
//int main () {
//    std::string input[1000];
//    int z = -2;
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -1) {
//            size = n;
//        }
//    }
//
//    z = 0;
//    std::regex r("\\s+");
//
//    for (int i = 0; i < size; i++) {
//        input[i+1] = std::regex_replace(input[i + 1], r, "");
//        for (int j = 0; j < size; j++) {
//            if (input[i + 1].at(j) == '.') {
//                maze[i][j] = EMPTY;
//            } else if (input[i + 1].at(j) == 'X') {
//                maze[i][j] = FILLED;
//            } else if (input[i + 1].at(j) == 'B') {
//                maze[i][j] = BEACH;
//            } else if (input[i + 1].at(j) == 'M') {
//                maze[i][j] = MOUNTAIN;
//            }else if (input[i + 1].at(j) == '@') {
//                maze[i][j] = EMPTY;
//                startX = i;
//                startY = j;
//            }
//        }
//
//    }
//
//    travel(startX, startY, 0);
//
//    if (stepB < stepM) {
//        std::cout << "Beach " << stepB;
//    } else if (stepB > stepM) {
//        std::cout << "Mountains " << stepM;
//    } else {
//        std::cout << "Either " << stepB;
//    }
//
//}