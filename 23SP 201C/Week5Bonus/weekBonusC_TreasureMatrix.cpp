//#include <iostream>
//
//int n;
//int m;
//int maze[10][10];
//bool visited[10][10];
//int count = -1;
//
//void findPossible (int x, int y, int step) {
//    if (visited[x][y]) {
//        return;
//    }
//    if (maze[x][y] == '#') {
//        return;
//    }
//    if (std::isdigit(maze[x][y])) {
//        step+= maze[x][y] - '0';
//    }
//
//    if (x == n-1 && y == m-1) {
//        if (step > count) {
//            count = step;
//        }
//        return;
//    }
//
//    visited[x][y] = true;
//
//
//
//    if (x+1 < n) {
//        findPossible(x+1, y, step);
//    }
//    if (x-1 >= 0) {
//        findPossible(x-1, y, step);
//    }
//    if (y+1 < m) {
//        findPossible(x, y+1, step);
//    }
//    if (y-1 >= 0) {
//        findPossible(x, y-1, step);
//    }
//    visited[x][y] = false;
//}
//
//
//int main () {
//    std::cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        std::string userInput;
//        std::cin >> userInput;
//        for (int j = 0; j < m; j++) {
//            maze[i][j] = userInput.at(j);
//        }
//    }
//
//    findPossible(0,0,0);
//    std::cout << count << std::endl;
//}