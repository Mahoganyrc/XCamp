//#include <iostream>
//
//int n;
//int maze[1000][1000];
//
//void findPossible (int x, int y) {
//
//    if (x < 0 || y < 0 || x >= n || y >= n || maze[x][y] != 1) {
//        return;
//    }
//
//    maze[x][y] = 3;
//
//    for (int i = 0; i < n; i++) {
//        findPossible(x,i);
//        findPossible(i,x);
//        findPossible(y,i);
//        findPossible(i,y);
//    }
//
//
//
//
//}
//
//int main () {
//    int count = 0;
//    std::cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i == j) {
//                std::cin >> maze[i][j];
//
//            }else {
//                std::cin >> maze[i][j];
//            }
//
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++ ) {
//            if (maze[i][j] == 1) {
//                findPossible(i,j);
//                count++;
//            }
//        }
//    }
//    std::cout << count << std::endl;
//
//
//}