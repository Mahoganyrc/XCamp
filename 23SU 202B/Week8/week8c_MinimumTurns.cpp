//#include <iostream>
//#include <queue>
//struct Coord {
//    int x;
//    int y;
//};
//enum Direction {
//    NORTH,WEST,SOUTH,EAST,NEUTRAL
//};
//int n;
//int m;
//int bfsMaze[169][169];
//int inputMaze[169][169];
//bool visited[169][169];
//Coord move[4] = {{-1,0},{1,0},{0,-1},{0,1}};
//Direction dS[4] = {NORTH,SOUTH,WEST,EAST};
//int bfs (Coord start, Coord end) {
//    std::queue<std::pair<Coord,Direction>> q;
//    start.x--;
//    start.y--;
//    end.x--;
//    end.y--;
//    visited[start.x][start.y] = true;
//    bfsMaze[start.x][start.y] = 0;
//    q.push(std::make_pair(start,NEUTRAL));
//
//    while (!q.empty()) {
//        Coord temp = q.front().first;
//        Direction tempD = q.front().second;
//        q.pop();
//        if (temp.x == end.x && temp.y == end.y && inputMaze[end.x][end.y] != 1) {
//            return bfsMaze[end.x][end.y];
//        }
//        for (int i = 0; i < 4; i++) {
//            int x = temp.x+move[i].x;
//            int y = temp.y+move[i].y;
//            Direction d = dS[i];
//            if (x < 0 || y < 0 || x >= n || y >= m || inputMaze[x][y] == 1 || visited[x][y]) {
//                continue;
//            }else if (tempD == d || tempD == NEUTRAL) {
//                bfsMaze[x][y] = bfsMaze[temp.x][temp.y];
//                Coord push = {x,y};
//                visited[x][y] = true;
//                q.push(std::make_pair(push,d));
//            }else {
//                    bfsMaze[x][y] = bfsMaze[temp.x][temp.y]+1;
//                    Coord push = {x,y};
//                    visited[x][y] = true;
//                    q.push(std::make_pair(push,d));
//                }
//            }
//        }
//        return -1;
//    }
//
//int main () {
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0 ; j < m; j++) {
//            std::cin >> inputMaze[i][j];
//        }
//    }
//    Coord start,end;
//    std::cin >> start.x >> start.y >> end.x >> end.y;
//    int x = bfs(start,end);
//    std::cout << x << std::endl;
//
//
//}