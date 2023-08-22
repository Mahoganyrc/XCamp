//#include <iostream>
//#include <queue>
//
//int n;
//std::queue<std::pair<int,int>> q1;
//std::queue<std::pair<int,int>> q2;
//std::queue<int> s1;
//std::queue<int> s2;
//int stepsArray1[301][301];
//int stepsArray2[301][301];
//
//int dx[8] = {1,-1,0,0,2,-2,0,-0};
//int dy[8] = {0,0,1,-1,0,0,2,-2};
//
//int main () {
//    bool notFound = true;
//    int output = 999999;
//    std::pair<int,int> start;
//    std::pair<int,int> end;
//
//    std::cin >> n >> start.first >> start.second >> end.first >> end.second;
//    q1.push(start);
//    q2.push(end);
//    s1.push(0);
//    s2.push(0);
//
//    if (start.first == end.first && start.second == end.second) {
//        std::cout << 0 << std::endl;
//        return 0;
//    }
//
//    while (notFound) {
//        int x = q1.front().first;
//        int y = q1.front().second;
//        int step = s1.front();
//        q1.pop();
//        s1.pop();
//        stepsArray1[x][y] = step;
//        if (stepsArray2[x][y] != 0) {
//            output = stepsArray2[x][y] + step;
//            break;
//        }
//        for (int i = 0; i < 8; i++) {
//            int xx = x + dx[i];
//            int yy = y + dy[i];
//
//            if (xx < 0 || xx >= n || yy < 0 || yy >= n || stepsArray1[xx][yy] != 0) {
//                continue;
//            }else if (stepsArray2[xx][yy] != 0) {
//                notFound = false;
//                output = std::min(output,step+stepsArray2[xx][yy]+1);
//                break;
//            }else {
//                q1.push(std::make_pair(xx,yy));
//                s1.push(step+1);
//                stepsArray1[xx][yy] = step+1;
//            }
//        }
//
//        x = q2.front().first;
//        y = q2.front().second;
//        step = s2.front();
//        q2.pop();
//        s2.pop();
//        stepsArray2[x][y] = step;
//        if (stepsArray1[x][y] != 0) {
//            output = stepsArray1[x][y] + step;
//            break;
//        }
//        for (int i = 0; i < 8; i++) {
//            int xx = x + dx[i];
//            int yy = y + dy[i];
//
//            if (xx < 0 || xx >= n || yy < 0 || yy >= n || stepsArray2[xx][yy] != 0) {
//                continue;
//            }else if (stepsArray1[xx][yy] != 0) {
//                notFound = false;
//                output = std::min(output,step+stepsArray1[xx][yy]+1);
//                break;
//            }else {
//                q2.push(std::make_pair(xx,yy));
//                s2.push(step+1);
//                stepsArray2[xx][yy] = step+1;
//            }
//        }
//
//    }
//
//    std::cout << output << std::endl;
//    return 0;
//
//}
