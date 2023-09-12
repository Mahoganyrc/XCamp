//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//struct Coord {
//    int x;
//    int y;
//};
//int n,m,a,b;
//std::vector<Coord> infectionSource;
//std::vector<Coord> leader;
//int visited[569][569];
//bool thisVisited[569][569];
//Coord infections[4] = {{-1,0},{1,0},{0,-1},{0,1}};
//
//void bfs (Coord start) {
//    std::queue<Coord> q;
//    q.push(start);
//    visited[start.x][start.y] = 0;
//    thisVisited[start.x][start.y] = true;
//    while (!q.empty()) {
//        Coord temp = q.front();
//        int step = visited[temp.x][temp.y];
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int x = temp.x + infections[i].x;
//            int y = temp.y + infections[i].y;
//            if (x < 0 || y < 0 || x >= n || y >= m || thisVisited[x][y]) {
//                continue;
//            }else if (visited[x][y] == -1) {
//                q.push({x,y});
//                visited[x][y] = visited[temp.x][temp.y]+1;
//                thisVisited[x][y] = true;
//            }
//            else {
//                if (step+1 <= visited[x][y]) {
//                    q.push({x,y});
//                    visited[x][y] = step+1;
//                    thisVisited[x][y] = true;
//                }
//            }
//        }
//    }
//}
//
//int main () {
//    std::cin >> n >> m >> a >> b;
//    for (int i = 0 ; i < a; i++) {
//       Coord temp;
//       std::cin >> temp.x >> temp.y;
//       infectionSource.push_back({temp.x-1,temp.y-1});
//    }
//    for (int i = 0 ; i < b; i++) {
//        Coord temp;
//        std::cin >> temp.x >> temp.y;
//        leader.push_back({temp.x-1,temp.y-1});
//    }
//    memset(visited,-1,sizeof(visited));
//    for (int i = 0; i < infectionSource.size(); i++) {
//        memset(thisVisited,false,sizeof(thisVisited));
//        bfs(infectionSource[i]);
//    }
//    for (int i = 0; i < leader.size(); i++) {
//        std::cout << visited[leader[i].x][leader[i].y] << std::endl;
//    }
//
//
//}