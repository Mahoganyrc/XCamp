//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//char field[6969][6969];
//bool visited[6969][6969];
//double visitedTest[6969][6969];
//int n;
//int m;
//
//const int UP = 6901;
//const int DOWN = 6902;
//const int LEFT = 6903;
//const int RIGHT = 6904;
//
//bool indefinitely = false;
//int maxStep;
//
//
//
//void findPossible (int x, int y, int step, int direction) {
//
//    if ( x >= n || x < 0 || y >= m || y < 0) {
//        step--;
//        if (maxStep < step) {
//            maxStep = step;
//        }
//        return;
//    }
//
//    if (visitedTest[x][y] == 4 || visited[x][y] || indefinitely) {
//        indefinitely = true;
//        return;
//    }
//
//    visitedTest[x][y]+=0.25;
//    char current = field[x][y];
//
//    if (current == '\\') {
//        switch (direction) {
//            case DOWN:
//                findPossible(x,y+1,step+1,RIGHT);
//                break;
//            case LEFT:
//                findPossible(x-1,y,step+1,UP);
//                break;
//            case UP:
//                findPossible(x,y-1,step+1,LEFT);
//                break;
//            case RIGHT:
//                findPossible(x+1,y,step+1,DOWN);
//                break;
//        }
//
//    }
//
//    if (current == '/') {
//        switch (direction) {
//            case DOWN:
//                findPossible(x,y-1,step+1,LEFT);
//                break;
//            case LEFT:
//                findPossible(x+1,y,step+1,DOWN);
//                break;
//            case UP:
//                findPossible(x,y+1,step+1,RIGHT);
//                break;
//            case RIGHT:
//                findPossible(x-1,y,step+1,UP);
//                break;
//        }
//    }
//
//
//
//}
//
//
//
//int main () {
//    std::vector<int> possibleAnswers;
//    std::string input[6969];
//    std::string temp;
//
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> temp;
//        input[i] = temp;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            field[i][j] = input[i].at(j);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        maxStep = 0;
//        findPossible(i,0,1,RIGHT);
//        possibleAnswers.push_back(maxStep);
//
//        maxStep = 0;
//        findPossible(i,m-1,1,LEFT);
//        possibleAnswers.push_back(maxStep);
//
//    }
//
//    for (int i = 0; i < m; i++) {
//        maxStep = 0;
//        findPossible(0,i,1,DOWN);
//        possibleAnswers.push_back(maxStep);
//
//        maxStep = 0;
//        findPossible(n-1,i,1,UP);
//        possibleAnswers.push_back(maxStep);
//
//    }
//
//    possibleAnswers.push_back(-1);
//    std::sort(possibleAnswers.begin(),possibleAnswers.end());
//    std::cout << possibleAnswers.at(possibleAnswers.size()-1);
//
//
//
//}
