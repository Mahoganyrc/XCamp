//#include <iostream>
//#include <string>
//#include <sstream>
//
//
//
//
//void testPossible(char maze[1000][1000], int x, int y, int sizeX, int sizeY) {
//    if (maze[x][y] == '#' || maze[x][y] == '*') {
//        return;
//    }
//    if (maze[x][y] == '.' || maze[x][y] == '@') {
//        maze[x][y] = '*';
//    }
//
//    if (x-1 >= 0) {
//        testPossible(maze, x-1, y, sizeX, sizeY);
//    }
//
//    if (x+1 < sizeX) {
//        testPossible(maze, x+1, y, sizeX, sizeY);
//    }
//
//    if (y-1 >= 0) {
//        testPossible(maze, x, y-1, sizeX, sizeY);
//    }
//
//    if (y+1 < sizeY) {
//        testPossible(maze, x, y+1, sizeX, sizeY);
//    }
//}
//
//int main() {
//    char maze[1000][1000];
//    int W;
//    int H;
//    int x;
//    int y;
//    std::string input[1000];
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//    int n;
//    int z = -2;
//    while (ss >> n) {
//        if (z == -2) {
//            W = n;
//            z++;
//        } else if (z == -1) {
//            H = n;
//            z++;
//        }
//    }
//
//    for (int j = 0; j <H; j++) {
//        for (int k = 0; k < W; k++) {
//            maze[j][k]=input[j+1].at(k);
//            if (maze[j][k] == '@') {
//                y = k;
//                x = j;
//            }
//
//        }
//    }
//
//    testPossible(maze, x, y, H, W);
//    int count = 0;
//    for (int a = 0; a < H; a++) {
//        for (int b = 0; b < W; b++) {
//            if (maze[a][b] == '*') {
//                count++;
//            }
//        }
//    }
//    std::cout << count << std::endl;
//    return 0;
//}
