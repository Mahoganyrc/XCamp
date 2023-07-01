//#include <iostream>
//
//int maze[100][100];
//int r;
//int c;
//int max = -1;
//
//void findPossible (int x, int y, int step) {
//
//    if (step > max) {
//        max = step;
//    }
//
//    if (x - 1 >= 0 && maze[x-1][y] < maze[x][y]) {
//        findPossible(x-1,y,step+1);
//    }
//    if (y - 1 >= 0 && maze[x][y-1] < maze[x][y]) {
//        findPossible(x,y-1,step+1);
//    }
//    if (x + 1 < r && maze[x+1][y] < maze[x][y]) {
//        findPossible(x+1,y,step+1);
//    }
//    if (y + 1 < c && maze[x][y+1] < maze[x][y]) {
//        findPossible(x,y+1,step+1);
//    }
//}
//
//int main () {
//   std::cin >> r >> c;
//   for (int i = 0; i < r; i++) {
//       for (int j = 0; j < c; j++) {
//           std::cin >> maze[i][j];
//       }
//   }
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            findPossible(i,j,1);
//        }
//    }
//
//    std::cout << max << std::endl;
//}
