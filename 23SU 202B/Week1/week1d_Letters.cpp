//#include <iostream>
//int r;
//int s;
//char maze[1000][1000];
//bool visited[1000];
//int max = 0;
//
//void findPossible(int x, int y, int step) {
////    int charNum = maze[x][y] - 'a';
//    //std::cout << maze[x][y] << " = " << maze[x][y] - 'A' << std::endl;
//    if (visited[maze[x][y] - 'A']) {
//        return;
//    }
//
//    if (step > max) {
//        max = step;
//    }
//    visited[maze[x][y] - 'A'] = true;
//    if (x - 1 >= 0) {
//        findPossible(x-1,y,step+1);
//    }
//    if (y - 1 >= 0) {
//        findPossible(x,y-1,step+1);
//    }
//    if (x + 1 < r) {
//        findPossible(x+1,y,step+1);
//    }
//    if (y + 1 < s) {
//        findPossible(x,y+1,step+1);
//    }
//    visited[maze[x][y] - 'A'] = false;
//
//}
//
//
//int main () {
//    std::string input[1000];
//    std::cin >> r >> s;
//    for (int i = 0; i < r; i++) {
//        std::cin >> input[i];
//    }
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < s; j++) {
//            maze[i][j] = input[i].at(j);
//        }
//    }
//
//
//    findPossible (0,0,1);
//
//    std::cout << max << std::endl;
//
//
//}