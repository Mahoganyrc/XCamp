//#include <iostream>
//#include <vector>
//
//int n;
//int b;
//
//struct Coord {
//    int x;
//    int y;
//};
//
//std::vector<Coord> cowLoc;
//std::vector<int> testX;
//std::vector<int> testY;
//
//int check (int x, int y) {
//    int q1 = 0,q2 = 0,q3 = 0,q4 = 0;
//    for (int i = 0; i < cowLoc.size(); i++) {
//        if       (x < cowLoc[i].x && y < cowLoc[i].y) {
//            q2++;
//        }else if (x > cowLoc[i].x && y < cowLoc[i].y) {
//            q1++;
//        }else if (x < cowLoc[i].x && y > cowLoc[i].y) {
//            q4++;
//        }else if (x > cowLoc[i].x&& y > cowLoc[i].y) {
//            q3++;
//        }
//    }
//
//    return std::max(std::max(q1,q2),std::max(q3,q4));
//
//}
//
//int main () {
//    std::cin >> n >> b;
//    for (int i = 0; i < n; i++) {
//        Coord temp{};
//        std::cin >> temp.x >> temp.y;
//        cowLoc.push_back(temp);
//        testX.push_back(temp.x-1);
//        testX.push_back(temp.x+1);
//        testY.push_back(temp.y-1);
//        testY.push_back(temp.y+1);
//    }
//
//    int min = 99999999;
//
//    for (int i = 0; i < testX.size(); i++) {
//        for (int j = 0; j < testY.size(); j++) {
//            min = std::min (check(testX[i],testY[j]),min);
//        }
//    }
//    std::cout << min << std::endl;
//
//
//}