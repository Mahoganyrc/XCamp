//#include <iostream>
//#include <queue>
//
//int sizeX;
//int sizeY;
//
//char maze[6969][6969];
//std::queue<int> qx;
//std::queue<int> qy;
//
//int dx[] = {0,0,1,-1,1,-1,1,-1};
//int dy[] = {1,-1,0,0,1,-1,-1,1};
//
//int output = 0;
//
//
//void bfs (int x, int y) {
//    qx.push(x);
//    qy.push(y);
//    maze[x][y] = '0';
//
//    while (!qx.empty() && !qy.empty()) {
//        int X = qx.front();
//        int Y = qy.front();
//        qx.pop();
//        qy.pop();
//        maze[X][Y] = '0';
//
//
//        for (int i = 0; i < 8; i++) {
//
//            int a = X + dx[i];
//            int b = Y + dy[i];
//
//            if (a < 0 || b < 0 || a >= sizeX || b >= sizeY || maze[a][b] == '0') {
//                continue;
//
//            }else {
//                maze[a][b] = '0';
//                qx.push(a);
//                qy.push(b);
//
//            }
//
//        }
//    }
//
//
//
//
//
//
//
//}
//int main () {
//    char x;
//    std::cin >> sizeX >> sizeY;
//    for (int i = 0; i < sizeX; i++) {
//        for (int j = 0; j < sizeY; j++) {
//            std::cin >> x;
//            maze[i][j] = x;
//        }
//    }
//
//
//    for (int i = 0; i < sizeX; i++) {
//        for (int j = 0; j < sizeY; j++) {
//            if (maze[i][j] == '1') {
//                bfs(i,j);
//                output++;
//            }
//        }
//    }
//
//    std::cout << output << std::endl;
//
//}