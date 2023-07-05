//#include <iostream>
//#include <chrono>
//#include <queue>
//
//
//struct Coord {
//    int x;
//    int y;
//};
//int n;
//int m;
//int counter = 0;
//int board[400][400];
//bool visited[400][400];
//std::queue <Coord> bfsQueue;
//Coord jumps[8] = {
//{1,2},
//{1,-2},
//{-1,2},
//{-1,-2},
//{2,1},
//{2,-1},
//{-2,1},
//{-2,-1}
//};
//
//std::string format (std::string input) {
//    int x = 5 - input.length();
//    if (x <= 0) {
//        return " " + input;
//    }else {
//        for (int i = 0; i < x; i++) {
//            input = " " + input;
//        }
//        return input;
//    }
//}
//
//
//void bfs (Coord coord) {
//
//    bfsQueue.push(coord);
//    board[coord.x][coord.y] = 0;
//    visited[coord.x][coord.y] = true;
//
//    while (!bfsQueue.empty()) {
//        int x = bfsQueue.size();
//
//            Coord current = bfsQueue.front();
//            bfsQueue.pop();
//            int addX;
//            int addY;
//            int step = board[current.x][current.y];
//            for (int i = 0; i < 8; i++) {
//                addX = jumps[i].x;
//                addY = jumps[i].y;
//                Coord input;
//                input.x = current.x + addX;
//                input.y = current.y + addY;
//                if (
//                        input.x < n &&
//                        input.x >= 0 &&
//                        input.y < m &&
//                        input.y >= 0 &&
//                        !visited[input.x][input.y]
//                        ) {
//
//                    visited[current.x + addX][current.y + addY] = true;
//                    if (board[input.x][input.y] > step+1 || board[input.x][input.y] == -1) {
//                        board[input.x][input.y] = step+1;
//                    }
//                    bfsQueue.push(input);
////                    bfs(input, step + 1);
////                    visited[current.x + addX][current.y + addY] = false;
//
//                }
//            }
//
//
//    }
//}
//
//
//int main () {
//
//
//    Coord start;
//    std::cin >> n >> m >> start.x >> start.y;
//    start.x--;
//    start.y--;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            board[i][j] = -1;
//            visited[i][j] = false;
//        }
//    }
//
//    //visited[start.x][start.y] = true;
//    //board[start.x][start.y] = 0;
//    bfs(start);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            std::cout << format(std::to_string(board[i][j])) << " ";
//        }
//        std::cout << std::endl;
//    }
//
//
//}
//
