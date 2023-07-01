//#include <iostream>
//#include <queue>
//#include <vector>
//
//
//class Node  {
//public:
//    int data;
//    Node* next;
//    Node* prev;
//
//    void setNode (int data, Node* prev, Node* next) {
//        this->data;
//        this->prev;
//        this->next;
//    }
//
//};
//
//
//
//int main () {
//
//
//    Node* head = new Node();
//    Node* second = new Node();
//    Node* third = new Node();
//    Node* fourth = new Node();
//
//    head->setNode(1,nullptr,second);
//    second->setNode(2,head,third);
//    third->setNode(3,second,fourth);
//    fourth->setNode(4,third,nullptr);
//
//
//
//
//
//    std::vector<int> testVector;
//
//    srand(time(0));
//
//    for (int i = 0; i < 10; i++) {
//        testVector.push_back(rand() % 11 );
//    }
//
//    std::priority_queue<int,std::vector<int>,std::less<>> test(testVector.begin(),testVector.end());
//    for (int i = 0; i < 10; i++) {
//        std::cout << std::to_string(test.top()) << " ";
//        test.pop();
//    }
//}