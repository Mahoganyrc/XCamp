//#include <iostream>
//#include <sstream>
//
//int main () {
//    std::string input;
//    int num1;
//    int num2;
//    std::cout << std::endl;
//    std::string output = "";
//
//
//    while (std::getline(std::cin,input) && !input.empty()) {
//        int spaceLocation = input.find(" ");
//        num1 = std::stoi(input.substr(0,spaceLocation));
//        num2 = std::stoi(input.substr(spaceLocation+1,input.length()-1));
//
//
//        std::stringstream ss;
//        ss << (num1+num2);
//        output+=ss.str() + "\n";
//
//    }
//    std::cout <<output << std::endl;
//
//
//    return 0;
//}
