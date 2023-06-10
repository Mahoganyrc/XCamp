//#include <iostream>
//#include <sstream>
//
//int size;
//int maze[201][201];
//int startx;
//int starty;
//
//const int BELOWGROUND = 0;
//const int GROUND = 1;
//const int VISITED = -1;
//
//void flood (int x, int y){
//    if (maze[x][y] == GROUND) {
//        return;
//    }
//    if (maze[x][y] == VISITED) {
//        return;
//    }
//
//    if (maze[x][y] == BELOWGROUND) {
//        maze[x][y] = VISITED;
//    }
//
//   if (x-1 >= 0) {
//         flood(x-1,y);
//    }
//    if (x+1 < size) {
//        flood(x+1,y);
//    }
//    if (y-1 >= 0) {
//        flood(x,y-1);
//    }
//    if (y+1 < size) {
//        flood(x,y+1);
//    }
//
//
//
//}
//
//int main () {
//
//    std::string input[1000];
//    int z = -2;
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -1) {
//            size = n;
//        }
//    }
//
//    z = 0;
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if ( input[i+1].at(j) ==  '-') {
//                maze[i][j] = GROUND;
//            } else if (input[i+1].at(j) == '*') {
//                startx = i;
//                starty = j;
//            } else if (input[i+1].at(j) == '_') {
//                maze[i][j] = BELOWGROUND;
//            }
//
//        }
//    }
//
//
//
//    flood(startx,starty);
//
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        for (int j =0; j < size; j++) {
//            if (maze[i][j] == VISITED) {
//                count++;
//            }
//        }
//    }
//    std::cout << count <<std::endl;
//
//}
//
