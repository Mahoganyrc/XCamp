//#include <iostream>
//#include <queue>
//#include <cstring>
//
//int n;
//struct Coord {
//    int x;
//    int y;
//};
//
//Coord jumps[8] = {
//        {1,2},
//        {1,-2},
//        {-1,2},
//        {-1,-2},
//        {2,1},
//        {2,-1},
//        {-2,1},
//        {-2,-1}
//};
//
//
//int bfs (Coord start, Coord end) {
//    if (start.x == end.x && start.y == end.y) {
//        return 0;
//    }
//    std::queue<std::pair<Coord,int>> q;
//    int visited[301][301];
//    memset(visited,-1,sizeof(visited));
//    q.push({start,0});
//    while (!q.empty()) {
//        Coord tempCoord = q.front().first;
//        int step = q.front().second;
//        q.pop();
//        for (int i = 0; i < 8; i++) {
//            int x = tempCoord.x + jumps[i].x;
//            int y = tempCoord.y + jumps[i].y;
//
//            if (x < 0 || y < 0 || x >= n || y>= n || visited[x][y] != -1) {
//                continue;
//            }else if (x == end.x && y == end.y) {
//                return step+1;
//            }else {
//                visited[x][y] = step+1;
//                Coord temp = {x,y};
//                q.push(std::make_pair(temp,step+1));
//            }
//        }
//    }
//    return -1;
//}
//
//int main () {
//    Coord start;
//    Coord end;
//    std::cin >> n >> start.x >> start.y >> end.x >> end.y;
//    std::cout << bfs(start,end) << std::endl;
//}