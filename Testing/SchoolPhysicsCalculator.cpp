#include <iostream>
#include <cmath>
void BullseyeLab ();
int main () {
    std::cout << "Enter the number corresponding to the calculator you want to use\n";

}

void BullseyeLab () {
        double Vxi;
        double x;
        double y;

        std::cout << "Please input vxi: (\"-69\") if not given" << std::endl;
        std::cin >> Vxi;
        std::cout << "Please input x: (\"-69\") if not given" << std::endl;
        std::cin >> x;
        std::cout << "Please input y: (\"-69\") if not given" << std::endl;
        std::cin >> y;

        if (Vxi == -69) {
            x/=y;
            x*=x;
            x*=9.8;
            x/=2;
            std::cout << x << std::endl;
        }else if (x == -69) {
            y*=2;
            y/=9.8;
            y = sqrt(y);
            Vxi *= y;
            std::cout << Vxi << std::endl;
        }else if (y == -69) {
            x/=Vxi;
            x*=x;
            x*=9.8;
            x/=2;
            std::cout << x << std::endl;
        }

}