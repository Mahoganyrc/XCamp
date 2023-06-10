//#include <sstream>
//#include <iostream>
//
//int maze[101][101];
//int maxTime;
//std::string userInput[200];
//int paths;
//
//int sizeX;
//int sizeY;
//int startX;
//int startY;
//int endX;
//int endY;
//
//const int BLOCKED = 1;
//const int OPEN = 0;
//const int VISITED = 2;
//
//
//
//void findPossible (int x, int y, int time) {
//
//
//
//    if (x == endX && y == endY) {
//        paths++;
//        return;
//    }
//
//    if (maze[x][y] == BLOCKED) {
//        return;
//    }
//    if (maze[x][y] == VISITED) {
//        return;
//    }
//
//    if (time > maxTime) {
//        return;
//    }
//
//    //maze[x][y] = VISITED;
//    if (x+1 < sizeX) {
//        findPossible(x+1, y, time+1);
//    }
//    if (x-1 >= 0) {
//        findPossible(x-1, y, time+1);
//    }
//    if (y+1 < sizeY) {
//        findPossible(x, y+1, time+1);
//    }
//    if (y-1 >= 0) {
//        findPossible(x, y-1, time+1);
//    }
//    maze[x][y] = OPEN;
//
//
//
//
//
//
//}
//
//
//
//
//int main () {
//    std::cin >> sizeX >> sizeY >> maxTime;
//
//
//    for (int i = 0; i < sizeX; i++) {
//        std::cin >> userInput[i];
//        for (int j = 0; j < sizeY; j++) {
//           if (userInput[i].at(j) == '.'){
//               maze[i][j] = OPEN;
//           } else if (userInput[i].at(j) == '*') {
//               maze[i][j] = BLOCKED;
//           }
//        }
//
//    }
//    std::cin >> startX >> startY >> endX >> endY;
//    startX--;
//   startY--;
//    endX--;
//   endY--;
//
//
//
//    for (int i = 0; i < sizeX; i++) {
//        std:: cout << i << "  ";
//        for (int j = 0; j < sizeY; j++) {
//
//            std::cout << maze[i][j];
//        }
//        std::cout << std::endl;
//    }
//
//
//    findPossible(startX, startY, 0);
//    std::cout << paths << std::endl;
//
//}
//
//
