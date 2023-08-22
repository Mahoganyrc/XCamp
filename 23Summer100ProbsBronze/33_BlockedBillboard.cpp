//#include <iostream>
//#include <algorithm>
//
//int view[6969][6969];
//int test[6969][6969];
//struct Rectangle {
//    int x1;
//    int x2;
//    int y1;
//    int y2;
//
//    void getInfo () {
//        std::cout << x1 << " " << y1 << " " << x2 << " " << y2 << std::endl;
//    }
//
//    int getMinX () {
//        return std::min(x1,x2);
//    }
//    int getMaxX() {
//        return std::max(x1,x2);
//    }
//    int getMinY () {
//        return std::min(y1,y2);
//    }
//    int getMaxY () {
//        return std::max(y1,y2);
//    }
//};
//
//int main () {
//    Rectangle board1;
//    Rectangle board2;
//    Rectangle truck;
//
//    std::cin >> board1.x1 >> board1.y1 >> board1.x2 >> board1.y2;
//    std::cin >> board2.x1 >> board2.y1 >> board2.x2 >> board2.y2;
//    std::cin >> truck.x1  >>  truck.y1 >> truck.x2  >> truck.y2;
//
//    for (int i = board1.getMinX()+1000; i < board1.getMaxX()+1000; i++ ){
//        for (int j = board1.getMinY()+1000; j < board1.getMaxY()+1000; j++) {
//            test[i][j] = 69;
//        }
//    }
//    for (int i = board2.getMinX()+1000; i < board2.getMaxX()+1000; i++ ){
//        for (int j = board2.getMinY()+1000; j < board2.getMaxY()+1000; j++) {
//            test[i][j] = 69;
//        }
//    }
//    for (int i = truck.getMinX()+1000; i < truck.getMaxX()+1000; i++ ){
//        for (int j = truck.getMinY()+1000; j < truck.getMaxY()+1000; j++) {
//            test[i][j] = 0;
//        }
//    }
//    int count = 0;
//    for (int i = 0; i < 2002; i++) {
//        for (int j = 0; j < 2002; j++) {
//            if (test[i][j] == 69) {
//               count++;
//            }
//        }
//    }
//    std::cout << count << std::endl;
//
//}