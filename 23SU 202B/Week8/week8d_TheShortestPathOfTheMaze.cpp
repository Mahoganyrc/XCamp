//#include <iostream>
//#include <queue>
//int n;
//int m;
//char maze[269][269];
//bool visited[269][269];
//struct Coord {
//    int x;
//    int y;
//};
//Coord move[4] = {{-1,0},{1,0},{0,-1},{0,1}};
//int bfs (Coord start, Coord end) {
//    std::queue<std::pair<Coord,int>> q;
//    q.push(std::make_pair(start,0));
//    while (!q.empty()) {
//        Coord temp = q.front().first;
//        int step = q.front().second;
//        q.pop();
//        visited[temp.x][temp.y] = true;
//        if (temp.x == end.x && temp.y == end.y) {
//            return step;
//        }
//        for (int i = 0; i < 4; i++) {
//            int x = temp.x + move[i].x;
//            int y = temp.y + move[i].y;
//            if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] || maze[x][y] == '#') {
//                continue;
//            }else {
//               Coord pushTemp = {x,y};
//               q.push(std::make_pair(pushTemp,step+1));
//               visited[x][y] = true;
//            }
//        }
//    }
//    return 0;
//}
//int main () {
//    Coord start;
//    Coord end;
//    std::cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            std::cin >> maze[i][j];
//            if (maze[i][j] == 'S') {
//                start.x = i;
//                start.y = j;
//            }else if (maze[i][j] == 'G') {
//                end.x = i;
//                end.y = j;
//            }
//        }
//    }
//    std::cout << bfs(start,end) << std::endl;
//}