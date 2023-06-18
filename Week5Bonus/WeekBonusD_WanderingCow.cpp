//#include <iostream>
//
//char maze[101][101];
//int n;
//int m;
//int t;
//int count = 0;
//
//int startX;
//int startY;
//int endX;
//int endY;
//
//void findPossible (int x, int y, int step) {
//    if (step == t) {
//        if (x == endX && y == endY) {
//            count++;
//        }
//        return;
//    }
//    if (step > t) {
//        return;
//    }
//
//    if ((abs(endX - x) + abs(endY - y)) > t) {
//        return;
//    }
//
//    if (maze[x][y] == '*') {
//        return;
//    }
//
//    std::cout << x << " " << y << " " << step << std::endl;
//    if (x+1 < n) {
//        findPossible(x+1, y, step+1);
//    }
//    if (x-1 >= 0) {
//        findPossible(x-1, y, step+1);
//    }
//    if (y+1 < m) {
//        findPossible(x, y+1, step+1);
//    }
//    if (y-1 >= 0) {
//        findPossible(x, y-1, step+1);
//    }
//
//
//}
//
//int main () {
//    std::ios_base::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//    std::cin >> n >> m >> t;
//    std::string userInput[200];
//
//    for (int i = 0; i < n; i++) {
//
//        std::cin >> userInput[i];
//
//        for (int j = 0; j < m; j++) {
//            maze[i][j] = userInput[i].at(j);
//        }
//    }
//
//    std::cin >> startX >> startY >> endX >> endY;
//    endX--;
//    endY--;
//    findPossible(startX-1, startY-1, 0);
//    std::cout << count;
//
//}