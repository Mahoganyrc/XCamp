//#include <iostream>
//#include <algorithm>
//
//struct Rectangle {
//public:
//    int x1;
//    int x2;
//    int y1;
//    int y2;
//    std::pair<int,int> p1;
//    std::pair<int,int> p2;
//    std::pair<int,int> p3;
//    std::pair<int,int> p4;
//
//    void adjust() {
//        p1 = std::make_pair(x1,y2);
//        p2 = std::make_pair(x2,y2);
//        p3 = std::make_pair(x2,y1);
//        p4 = std::make_pair(x1,y1);
//    }
//
//    int lowY() {
//        return std::min(y1,y2);
//    }
//    int lowX() {
//        return std::min(x1,x2);
//    }
//    int highY() {
//        return std::max(y1,y2);
//    }
//    int highX() {
//        return std::max(x1,x2);
//    }
//
//};
//int main () {
//    Rectangle rect1;
//    Rectangle rect2;
//
//    std::cin >> rect1.x1 >> rect1.y1 >> rect1.x2 >> rect1.y2;
//    rect1.adjust();
//
//    std::cin >> rect2.x1 >> rect2.y1 >> rect2.x2 >> rect2.y2;
//    rect2.adjust();
//
//
//
//    int x = std::max(std::abs(rect1.highX()-rect2.lowX()),std::abs(rect2.highX()-rect1.lowX()));
//    int xx = std::max(std::abs(rect1.highX()-rect1.lowX()),std::abs(rect2.highX()-rect2.lowX()));
//
//    int y = std::max(std::abs(rect1.highY()-rect2.lowY()),std::abs(rect2.highY()-rect1.lowY()));
//    int yy = std::max(std::abs(rect1.highY()-rect1.lowY()),std::abs(rect2.highY()-rect2.lowY()));
//
//    x = std::max(x,xx);
//    y = std::max(y,yy);
//
//    std::cout << std::max(x,y) * std::max(x,y) << std::endl;
//
////    std::cout << "std::max(std::abs(" << rect1.highX()-rect2.lowX() << "),std::abs(" << rect2.highX()-rect1.lowX() << "));" << std::endl;
////    std::cout << "std::max(std::abs(" << rect1.highY()-rect2.lowY() << "),std::abs(" << rect2.highY()-rect1.lowY() << "));" << std::endl;
//
//}