//#include <iostream>
//#include <vector>
//#include <queue>
//#include <iterator>
//#include <cstring>
//#include <algorithm>
//
//int n;
//int m;
//std::vector<int> adjList[3069];
//std::queue<int> closeOrder;
//bool visited[3069];
//
//bool checkConnected (std::queue<int> q) {
//    if (q.size() == 1) {
//        return true;
//    }
//    std::vector<int> run ;
//    while (!q.empty()) {
//        run.push_back(q.front());
//        q.pop();
//    }
//
//    memset(visited,false,sizeof(visited));
//    q.push(run[1]);
//    visited[run[1]] = true;
//    run.erase(run.begin()+1);
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//
//        for (int i : adjList[u]) {
//            //auto loc = std::find(run.begin(),run.end(),i);
//            if (std::find(run.begin(),run.end(),i) != run.end()) {
//                run.erase(std::find(run.begin(),run.end(),i));
//                q.push(i);
//            }
//        }
//    }
//
//    if (run.empty()) {
//        return true;
//    }else {
//        return false;
//    }
//
//}
//
//int main () {
//    int a;
//    int b;
//    std::cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        std::cin >> a >> b;
//        adjList[a].push_back(b);
//        adjList[b].push_back(a);
//    }
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> a;
//        closeOrder.push(a);
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (checkConnected(closeOrder)) {
//            std::cout << "YES" << std::endl;
//        }else {
//            std::cout << "NO" << std::endl;
//        }
//        closeOrder.pop();
//    }
//
//}