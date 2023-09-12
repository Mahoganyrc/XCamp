//#include <iostream>
//#include <set>
//#include <queue>
//#include <unordered_map>
//
//std::unordered_map<std::string,int> visited;
//std::queue<std::pair<std::string,int>> q;
//
//int dx[4] = {0,0,-1,1};
//int dy[4] = {-1,1,0,0};
//
//
//int board[3][3];
////end result: 123
////            804
////            765
//
//
//
//int main () {
//    std::string end = "123804765";
//    std::string input;
//    std::cin >> input;
//    q.push(std::make_pair(input,0));
//
//
//    while (!q.empty()) {
//        std::string tempString = q.front().first;
//        int step = q.front().second;
//        q.pop();
//
//        visited[tempString] = step;
//        int z = tempString.find('0');
//        int x = z / 3;
//        int y = z % 3;
//
//        for (int i = 0; i < 4; i++) {
//            int tempX = x + dx[i];
//            int tempY = y + dy[i];
//
//            if (tempX >= 0 && tempX < 3 && tempY >= 0 && tempY < 3) {
//                int tempZ = tempX*3+tempY;
//                std::string newString = tempString;
//                std::swap(newString[z],newString[tempZ]);
//
//                if (!visited[newString]) {
//                    q.push(std::make_pair(newString,visited[tempString] + 1));
//                    visited[newString] = visited[tempString] + 1;
//                }
//            }
//        }
//    }
//
//    std::cout << visited[end] << std::endl;
//
//
//}
