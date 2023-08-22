////#include <iostream>
////#include <queue>
////
////
////int ki[400];
////bool visited[401];
////int start;
////int end;
////
////std::queue<int> qx;
////std::queue<int> qs;
////std::queue<int> empty;
////
////void solve (int n) {
////    int x;
////
////    std::cin >> start >> end;
////    start--;
////    end--;
////    for (int i = 1; i <= n; i++) {
////        std::cin >> x;
////        ki[i] = x;
////        visited[i] = false;
////    }
////
////
////    qx.push(start);
////    qs.push(0);
////
////    while (!qx.empty() && !qs.empty()) {
////        int tempX = qx.front();
////        int tempS = qs.front();
////        qx.pop();
////        qs.pop();
////        visited[tempX] = true;
////
////        if (tempX == end) {
////            std::cout << tempS << std::endl;
////            return;
////        }
////
////        int top = tempX + ki[tempX];
////        int bottom = tempX - ki[tempX];
////
////        if (top < n && !visited[top]) {
////            qx.push(top);
////            qs.push(tempS+1);
////        }
////        if (bottom >= 0 && !visited[bottom]) {
////            qx.push(bottom);
////            qs.push(tempS+1);
////        }
////    }
////    std::cout << -1 << std::endl;
////    qx = empty;
////    qs = empty;
////
////}
////
////int main () {
////    int n;
////    while (std::cin >> n) {
////        if (n == 0) {
////            break;
////        }
////        solve(n);
////    }
////
////
////
////
////}
////
//#include <iostream>
//#include <queue>
//
//
//
//int ki[6969];
//bool visited[6969];
//int dist[6969];
//std::queue<int> qx;
//std::queue<int> qs;
//
//void solve(int n) {
//    int start, end;
//    std::cin >> start >> end;
//    start--;
//    end--;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> ki[i];
//        visited[i] = false;
//        dist[i] = -1;
//    }
//
//    dist[start] = 0;
//    qx.push(start);
//    qs.push(0);
//
//    while (!qx.empty()) {
//        int tempX = qx.front();
//        int tempS = qs.front();
//        qx.pop();
//        qs.pop();
//
//        int top = tempX + ki[tempX];
//        int bottom = tempX - ki[tempX];
//
//        if (top >= 0 && top < n && dist[top] == -1) {
//            dist[top] = tempS + 1;
//            qx.push(top);
//            qs.push(tempS + 1);
//        }
//
//        if (bottom >= 0 && bottom < n && dist[bottom] == -1) {
//            dist[bottom] = tempS + 1;
//            qx.push(bottom);
//            qs.push(tempS + 1);
//        }
//    }
//
//    if (dist[end] == -1) {
//        std::cout << -1 << std::endl;
//    } else {
//        std::cout << dist[end] << std::endl;
//    }
//}
//
//int main() {
//    int n;
//    while (std::cin >> n) {
//        if (n == 0) {
//            break;
//        }
//        solve(n);
//    }
//
//    return 0;
//}
