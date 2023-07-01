//#include <iostream>
//
//int size;
//int maze[50][50];
//bool visited[50][50];
//int shortest = 9999999;
//int amount;
//void findPossible (int x, int y, int step) {
//    if (maze[x][y] == 1) {
//        return;
//    }
//    if (visited[x][y]) {
//        return;
//    }
//    if (x == size-1 && y == size-1) {
//
//        if (step == shortest) {
//            amount++;
//        }
//
//        if (step < shortest) {
//            amount = 1;
//            shortest = step;
//        }
//        return;
//    }
//
//    visited[x][y] = true;
//
//    if (x + 1 < size) {
//        findPossible(x+1,y,step+1);
//    }
//    if (y + 1 < size) {
//        findPossible(x,y+1,step+1);
//    }
//    if (x - 1 >= 0) {
//        findPossible(x-1,y,step+1);
//    }
//    if (y - 1 >= 0) {
//        findPossible(x,y-1,step+1);
//    }
//
//
//    visited[x][y] = false;
//
//}
//
//int main () {
//    std::cin >> size;
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            std::cin >> maze[i][j];
//        }
//    }
//
//    findPossible(0,0,1);
//    std::cout << amount << std::endl;
//    std::cout << shortest << std::endl;
//
//
//}