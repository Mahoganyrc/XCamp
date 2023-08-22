//#include <iostream>
//#include <queue>
//#include <vector>
//#include <map>
//
//
//
//struct Pair {
//    int a;
//    int b;
//    int c;
//    int step;
//
//
//};
//int k,a,b,c,t;
//std::queue<std::tuple<int,int,int,int>> q1;
//std::queue<std::tuple<int,int,int,int>> q2;
//int maze[51][51][51];
//int visited1[51][51][51];
//int visited2[51][51][51];
//int da[6] = {1,-1,0,0,0,0};
//int db[6] = {0,0,1,-1,0,0};
//int dc[6] = {0,0,0,0,1,-1};
//std::vector<int> output;
//
//
//void reset() {
//    while (!q1.empty()) {
//        q1.pop();
//    }
//    while (!q2.empty()) {
//        q2.pop();
//    }
//    q1.emplace(0,0,0,0);
//    q2.emplace(0,a-1,b-1,c-1);
//}
//
//int main () {
//    std::cin >> k;
////    for (int _ = 0; _ < k; _++) {
//        std::cin >> a >> b >> c >> t;
//        if (a+b+c == 3) {
//            output.push_back(0);
//        }else {
//            reset();
//            for (int i = 0; i < a; i++) {
//                for (int j = 0; j < b; j++) {
//                    for (int l = 0; l < c; l++) {
//                        std::cin >> maze[a][b][c];
//                    }
//                }
//            }
//
//            while(!q1.empty() && !q2.empty()) {
//                int a1 = std::get<1>(q1.front());
//                int b1 = std::get<2>(q1.front());
//                int c1 = std::get<3>(q1.front());
//                int step1 = std::get<0>(q1.front());
//                q1.pop();
//                visited1[a1][b1][c1] = step1;
//                if (visited1[a1][b1][c1] != 0) {
//                    int x = step1 + visited1[a1][b1][c1];
//                    if (x > t) {
//                        output.push_back(-1);
//                    }else {
//                        output.push_back(x);
//                    }
//                    break;
//                }
//                for (int i = 0; i < 6; i++) {
//                    int aa = a1 + da[i];
//                    int bb = b1 + db[i];
//                    int cc = c1 + dc[i];
//
//                    if (aa < 0 || bb < 0 || cc < 0 || aa >= a || bb >= b || cc >= c || visited1[aa][bb][cc] != 0 || maze[aa][bb][cc] == 1) {
//                        continue;
//                    }else {
//                        q1.emplace(step1+1,aa,bb,cc);
//                        visited1[aa][bb][cc] = true;
//                    }
//                }
//                int a2 = std::get<1>(q2.front());
//                int b2 = std::get<2>(q2.front());
//                int c2 = std::get<3>(q2.front());
//                int step2 = std::get<0>(q2.front());
//                q2.pop();
//                visited2[a2][b2][c2] = step2;
//                if (visited1[a2][b2][c2] != 0) {
//                    int x = step2 + visited1[a2][b2][c2];
//                    if (x > t) {
//                        output.push_back(-1);
//                    }else {
//                        output.push_back(x);
//                    }
//                    break;
//                }
//                for (int i = 0; i < 6; i++) {
//                    int aa = a2 + da[i];
//                    int bb = b2 + db[i];
//                    int cc = c2 + dc[i];
//
//                    if (aa < 0 || bb < 0 || cc < 0 || aa >= a || bb >= b || cc >= c || visited2[aa][bb][cc] != 0 || maze[aa][bb][cc] == 1) {
//                        continue;
//                    }else {
//                        q2.emplace(step2+1,aa,bb,cc);
//                        visited2[aa][bb][cc] = true;
//                    }
//                }
//
//
//            }
//        }
//
//    //std::cout << output.size();
//    for (int i = 0; i < output.size(); i++) {
//        std::cout << output[i] << std::endl;
//    }
//
//    return 0;
//}
//
//

#include <iostream>
#include <queue>
#include <vector>

int k,a,b,c,t;
std::queue<std::tuple<int,int,int,int>> q1;
int maze[51][51][51];
int visited[51][51][51];
int da[6] = {1,-1,0,0,0,0};
int db[6] = {0,0,1,-1,0,0};
int dc[6] = {0,0,0,0,1,-1};
std::vector<int> output;
int print;


void reset() {
    while (!q1.empty()) {
        q1.pop();
    }
    q1.emplace(0,0,0,0);
}

int main () {
    std::cin >> k;

    std::cin >> a >> b >> c >> t;
    if (a+b+c == 3) {
        output.push_back(0);
    }else {
        reset();
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                for (int l = 0; l < c; l++) {
                    std::cin >> maze[a][b][c];
                }
            }
        }

        while (!q1.empty()) {
            int a1 = std::get<1>(q1.front());
            int b1 = std::get<2>(q1.front());
            int c1 = std::get<3>(q1.front());
            int step = std::get<0>(q1.front());
            q1.pop();
            visited[a1][b1][c1] = true;
            for (int i = 0; i < 6; i++) {
                int aa = a1 + da[i];
                int bb = b1 + db[i];
                int cc = c1 + dc[i];

                if (aa < 0 || bb < 0 || cc < 0 || aa >= a || bb >= b || cc >= c || visited[aa][bb][cc] ||
                    maze[aa][bb][cc] == 1) {
                    continue;
                } else if (aa == a - 1 && bb == b - 1 && cc == c - 1) {
                        print = step + 1;
                        std::cout << print << std::endl;
                    break;
                } else {
                    q1.emplace(step + 1, aa, bb, cc);
                    visited[aa][bb][cc] = true;

                }
            }
        }
    }

    std::cout << print << std::endl;
}


