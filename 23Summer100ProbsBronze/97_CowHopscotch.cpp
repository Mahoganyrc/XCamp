//#include <iostream>
//int r;
//int c;
//char maze[6969][6969];
//bool visited[6969][6969];
//int output = 0;
//
//void dfs (int x, int y, char past) {
//    if (x < 0 || y < 0 || x >= r || y >= c || visited[x][y] || maze[x][y] == past) {
//        return;
//    }
//
//    if (x == r-1 && y == c-1) {
//        output++;
//        return;
//    }
//
//    visited[x][y] = true;
//    for (int i = x+1; i < r; i++) {
//        for (int j = y+1; j < c; j++) {
//            dfs(i,j,maze[x][y]);
//        }
//    }
//    visited[x][y] = false;
//}
//
//int main () {
//    char x;
//    std::cin >> r >> c;
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            std::cin >> x;
//            maze[i][j] = x;
//        }
//    }
//    dfs(0,0,' ');
//    std::cout << output << std::endl;
//
//}