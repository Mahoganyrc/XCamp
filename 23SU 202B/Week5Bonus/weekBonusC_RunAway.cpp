//
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//#include <iterator>
//
//
//
//int k,a,b,c,t;
//std::queue<std::tuple<int,int,int,int>> q1;
//int maze[51][51][51];
//int visited[51][51][51];
//int da[6] = {1,-1,0,0,0,0};
//int db[6] = {0,0,1,-1,0,0};
//int dc[6] = {0,0,0,0,1,-1};
//std::vector<int> output;
//int print;
//
//
//void reset() {
//    while (!q1.empty()){
//        q1.pop();
//    }
//    q1.emplace(0,0,0,0);
//}
//
//int main () {
//    std::cin >> k;
//
//
//    for (int ix = 0; ix < k; ix++) {
//        print = INT_MAX;
//        memset(maze, 0, sizeof(maze));
//        std::cin >> a >> b >> c >> t;
//        if (a+b+c == 3) {
//            std::cout << "0" << std::endl;
//            continue;
//        }else {
//            reset();
//            for (int i = 0; i < a; i++) {
//                for (int j = 0; j < b; j++) {
//                    for (int l = 0; l < c; l++) {
//                        std::cin >> maze[a][b][c];
//                    }
//                }
//            }
//            if (maze[a-1][b-1][c-1] == 1) {
//                std::cout << ""
//            }
//
//            while (!q1.empty()) {
//                int a1 = std::get<1>(q1.front());
//                int b1 = std::get<2>(q1.front());
//                int c1 = std::get<3>(q1.front());
//                int step = std::get<0>(q1.front());
//                q1.pop();
//                visited[a1][b1][c1] = true;
//                for (int i = 0; i < 6; i++) {
//                    int aa = a1 + da[i];
//                    int bb = b1 + db[i];
//                    int cc = c1 + dc[i];
//
//                    if (aa < 0 || bb < 0 || cc < 0 || aa >= a || bb >= b || cc >= c || visited[aa][bb][cc] ||
//                        maze[aa][bb][cc] == 1) {
//                        continue;
//                    } else if (aa == a - 1 && bb == b - 1 && cc == c - 1) {
//                        print = step + 1;
//                        visited[aa][bb][cc] = true;
//                        break;
//                    } else {
//                        std::tuple<int,int,int,int> temp = std::make_tuple(step+1,aa,bb,cc);
//                        q1.push(temp);
//                        visited[aa][bb][cc] = true;
//
//                    }
//                }
//            }
//        }
//
//        if (print <= t) {
//            std::cout << print << std::endl;
//        }else {
//            std::cout << "-1" << std::endl;
//        }
//
//    }
//}
//
//
//
//
