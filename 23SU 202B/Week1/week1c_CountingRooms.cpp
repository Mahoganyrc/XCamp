//#include <iostream>
//
//char maze[1000][1000];
//int n;
//int m;
//int count = 0;
//
//
//void findPossible (int x, int y) {
//    if (maze[x][y] == '#') {
//        return;
//    }
//
//    maze[x][y] = '#';
//
//    if (x - 1 >= 0) {
//        findPossible(x-1, y);
//    }
//    if (y - 1 >= 0) {
//        findPossible(x,y-1);
//    }
//    if (x + 1 < n) {
//        findPossible(x+1,y);
//    }
//    if (y + 1 < m) {
//        findPossible(x,y+1);
//    }
//}
//
//int main () {
//
//    std::cin >> n >> m;
//    std::string input[1000];
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> input[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++ ) {
//            maze[i][j] = input[i].at(j);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++ ) {
//            //findPossible(i,j);
//            if (maze[i][j] == '.') {
//                findPossible(i,j);
//                //std::cout << "maze[" << i << "][" << j << "] == " << maze[i][j] << std::endl;
//                count++;
//            }
//
//        }
//    }
//
//    std::cout << count << std::endl;
//
//
//}