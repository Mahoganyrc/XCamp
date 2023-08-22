//#include <iostream>
//#include <queue>
//#include <stack>
//
//int size;
//int x;
//int y;
//int maze[6969][6969];
//std::queue<int> qx;
//std::queue<int> qy;
//bool visited[6969][6969];
//int counter = 1;
//
//
//
//int main () {
//    int z;
//    std::cin >> size >> x >> y;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            std::cin >> z;
//            maze[i][j] = z;
//        }
//    }
//
//
//    int dx[4] = {1,-1,1,-1};
//    int dy[4] = {0,0,1,-1};
//
//    qx.push(x);
//    qy.push(y);
//
//    while (!qx.empty() && !qy.empty()) {
//        int tempX = qx.front();
//        int tempY = qy.front();
//        qx.pop();
//        qy.pop();
//        visited[tempX][tempY] = true;
//
//        for (int i = 0; i < 4; i++) {
//            int XX = tempX+ dx[i];
//            int YY = tempY+ dy[i];
//
//            if (XX < 0 || YY < 0 || XX >= size || YY >= size || visited[XX][YY] || maze[XX][YY] == 1) {
//                continue;
//            }else {
//                qx.push(XX);
//                qy.push(YY);
//                visited[XX][YY] = true;
//                counter++;
//            }
//        }
//    }
//
//    std::cout << counter << std::endl;
//
//}