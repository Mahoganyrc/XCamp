//#include <iostream>
//
//
//int sizeX;
//int sizeY;
//int maze[101][101];
//bool visited[101][101];
//
//int startX;
//int startY;
//int endX;
//int endY;
//
//int stepCount = 0;
//
//void findPossible (int x, int y, int step) {
//    if(visited[x][y]) {
//        return;
//    }
//
//    if (step > stepCount) {
//            stepCount = step;
//    }
//
//
//
//    visited[x][y] = true;
//
//    if (x - 1 >= 0 && maze[x][y] > maze[x-1][y]) {
//        findPossible(x-1,y,step+1);
//    }
//    if (y + 1 < sizeY && maze[x][y] > maze[x][y+1]) {
//        findPossible(x,y+1,step+1);
//    }
//    if (x + 1 < sizeX && maze[x][y] > maze[x+1][y]) {
//        findPossible(x+1,y,step+1);
//    }
//    if (y - 1 >= 0 && maze[x][y] > maze[x][y-1]) {
//        findPossible(x,y-1,step+1);
//    }
//
//    visited[x][y] = false;
//
//}
//
//int main () {
//    int x;
//    int lowest = 9999999999;
//    int highest = -1;
//
//    std::cin >> sizeX >> sizeY;
//    for (int i = 0; i < sizeX; i++) {
//        for (int ii = 0; ii < sizeY; ii++) {
//            std::cin >> x;
//            if (x < lowest) {
//                lowest = x;
//                endX = i;
//                endY = ii;
//            }
//            if (x > highest) {
//                highest = x;
//                startX = i;
//                startY = ii;
//            }
//            maze[i][ii] = x;
//        }
//    }
//
//    for (int i = 0; i < sizeX; i++) {
//        for (int ii = 0; ii < sizeY; ii++) {
//            visited[i][ii] = false;
//        }
//    }
//    for (int i = 0; i < sizeX; i++) {
//        for (int ii = 0; ii < sizeY; ii++) {
//            findPossible(i,ii,1);
//        }
//
//    }
//
//    std::cout << stepCount << std::endl;
//
//
//}