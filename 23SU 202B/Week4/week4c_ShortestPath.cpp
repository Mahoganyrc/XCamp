//#include <iostream>
//#include <queue>
//
//int maze[6969][6969];
//bool visited[6969][6969];
//std::queue<int> qx;
//std::queue<int> qy;
//std::queue<int> qs;
//
//int dx[] = {0,0,-1,1};
//int dy[] = {-1,1,0,0};
//
//int output = -1;
//bool outputed = false;
//
//int main () {
//    int size;
//    std::cin >> size;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            std::cin >> maze[i][j];
//        }
//    }
//
//    qx.push(0);
//    qy.push(0);
//    qs.push(1);
//
//    while (!qx.empty() && !qy.empty() && !qs.empty()) {
//        int X = qx.front();
//        int Y = qy.front();
//        int curr = qs.front();
//
//        qx.pop();
//        qy.pop();
//        qs.pop();
//
//        visited[X][Y] = true;
//
//
//        for (int i = 0; i < 4; i++) {
//            int a = X + dx[i];
//            int b = Y + dy[i];
//
//            if (a < 0 || b < 0 || a >= size || b >= size || visited[a][b] || maze[a][b] == 1) {
//                continue;
//            }else if (a == size-1 && b == size-1) {
//                std::cout << curr+1 << std::endl;
//                outputed = true;
//                break;
//            }else {
//                    visited[a][b] = true;
//                    qx.push(a);
//                    qy.push(b);
//                    qs.push(curr+1);
//
//            }
//        }
//
//    }
//    if (!outputed) {
//        std::cout << -1 << std::endl;
//    }
//
//
//
//
//
//}
