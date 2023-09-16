//#include <iostream>
//#include <vector>
//#include <queue>
//
//int n;
//int m;
//std::vector<int> connections[100069];
//bool visited[100069];
//int distance[100069];
//int p[100069];
//
//
//int main () {
//    std::cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int a;
//        int b;
//        std::cin >> a >> b;
//        connections[a].push_back(b);
//        connections[b].push_back(a);
//    }
//
//    std::queue<int> q;
//    q.push(1);
//    visited[1] = true;
//
//    while (!q.empty()) {
//        int x = q.front();
//        q.pop();
//        for (int endPoint : connections[x]) {
//            if (!visited[endPoint]) {
//                distance[endPoint] = distance[x] + 1;
//                visited[endPoint] = true;
//                p[endPoint] = x;
//                q.push(endPoint);
//            }
//        }
//    }
//
//    if (!visited[n]) {
//        std::cout << "IMPOSSIBLE" << std::endl;
//        return 0;
//    }
//
//    int u = n;
//    int k = distance[n]+1;
//    std::vector<int> path;
//    path.reserve(k);
//    for (int i = distance[n]; i >= 0; i--) {
//        path[i] = u;
//        u = p[u];
//    }
//
//    std::cout << k << std::endl;
//    for (int i = 0; i < k; i++) {
//        std::cout << path[i] << " ";
//    }
//    std::cout << std::endl;
//}
