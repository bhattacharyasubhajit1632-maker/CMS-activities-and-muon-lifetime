// This exact code doesn't calculate muon lifetime exactly, rather it shows how far a muon travels in it's lifetime for a given momentum value, given it's proper lifetime 2.197e-6
// To calculate muon lifetime we need experimental data, one of its decay modes (weak)
#include <iostream>
#include <cmath>

int main() {
    
    double c = 3.0e8;               
    double m = 0.10566;             
    double p = 100.0;              
    double lifetime = 2.197e-6;     
    double E = std::sqrt((m * m) + (p * p)); 
    double beta = p / E;                    
    double gamma = 1.0 / std::sqrt(1.0 - (beta * beta));
    double distance = gamma * beta * c * lifetime;
    std::cout << "Total distance travelled at p = 100 GeV/c is " << distance << " meters." << std::endl;

    return 0;
}


