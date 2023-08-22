//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//#include <iterator>
//
//
//
//char maze[201][201];
//bool visited[201][201];
//
//int distanceToYourHouse[201][201];
//int distanceToFriendHouse[201][201];
//int n;
//int m;
//std::queue<int> qx;
//std::queue<int> qy;
//int dx[] = {0,0,-1,1};
//int dy[] = {-1,1,0,0};
//
//void resetVisited () {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            visited[i][j] = false;
//        }
//    }
//}
//
//int get (int startX, int startY, int distance[201][201]) {
//    qx.push(startX);
//    qy.push(startY);
//    distance[startX][startY] = 0;
//
//    while (!qx.empty() && !qy.empty()) {
//        int X = qx.front();
//        int Y = qy.front();
//
//        qx.pop();
//        qy.pop();
//
//        visited[X][Y] = true;
//        for (int i = 0; i < 4; i++) {
//            int a = X + dx[i];
//            int b = Y + dy[i];
//
//            if (a < 0 || b < 0 || a >= n || b >= m || visited[a][b] || maze[a][b] == '#') {
//                continue;
//            }else {
//                visited[a][b] = true;
//                qx.push(a);
//                qy.push(b);
//                distance[a][b] = distance[X][Y] + 1;
//            }
//        }
//
//    }
//    resetVisited();
//    return 0;
//}
//
//
//struct coord {
//    int x;
//    int y;
//
//};
//
//
//std::vector<coord> vec;
//coord friendHouse;
//coord yourHouse;
//int main () {
//
//    std::cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            std::cin >> maze[i][j];
//            if (maze[i][j] == '@') {
//                yourHouse.x = i;
//                yourHouse.y = j;
//            }else if (maze[i][j] == '&') {
//                friendHouse.x = i;
//                friendHouse.y = j;
//            }else if (maze[i][j] == 'F'){
//                coord kfc;
//                kfc.x = i;
//                kfc.y = j;
//                vec.push_back(kfc);
//            }
//        }
//    }
//    get(yourHouse.x,yourHouse.y,distanceToYourHouse);
//    get(friendHouse.x,friendHouse.y,distanceToFriendHouse);
//    int output = 69696969;
//
//    for (auto kfc : vec) {
//        int result = distanceToYourHouse[kfc.x][kfc.y] + distanceToFriendHouse[kfc.x][kfc.y];
//        if (result < output && distanceToYourHouse[kfc.x][kfc.y] != 0 && distanceToFriendHouse[kfc.x][kfc.y] != 0) {
//            output = result;
//        }
//    }
//
//
//    if (output == 69696969) {
//        std::cout << "Meeting cancelled" << std::endl;
//    }else {
//        std::cout << output << std::endl;
//    }
//
//}