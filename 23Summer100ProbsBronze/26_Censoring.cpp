//#include <iostream>
//
//int main () {
//    std::string s;
//    std::string t;
//    std::cin >> s >> t;
//    std::string output = "";
//
//    for (int i = 0; i < s.length(); i++) {
//        output+=s.at(i);
//        if (output.length() >= t.length()) {
//            if (output.substr(output.length()-t.length()) == t) {
//                output = output.substr(0,output.length()-t.length());
//            }
//        }
//    }
//
//    std::cout << output << std::endl;
//
//}