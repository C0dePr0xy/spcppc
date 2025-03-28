#include <iostream>
#include <cstdlib>

class pricer // Class made for storing price and quantity of components.
{
    public:
    double CPU = 0.00, GPU = 0.00, MOBO = 0.00, PSU = 0.00, CASE = 0.00, RAM = 0.00; // Price of components.
    int x_CPU = 0, x_GPU = 0, x_MOBO = 0, x_PSU = 0, x_CASE = 0, x_RAM = 0; // Quantity of components.
};

void fullBuild(), clear();

void clear()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void fullBuild()
{
    clear();
    pricer price, quantity;

    // Calculate all components.
    std::cout << "Simple PC Part Price Calculator [SPCPPC]\n\n";

    std::cout << "[CPU price] ";
    std::cin >> price.CPU;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_CPU;
    std::cout << "[GPU price] ";
    std::cin >> price.GPU;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_GPU;
    std::cout << "[MOBO price] ";
    std::cin >> price.MOBO;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_MOBO;
    std::cout << "[PSU price] ";
    std::cin >> price.PSU;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_PSU;
    std::cout << "[CASE price] ";
    std::cin >> price.CASE;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_CASE;
    std::cout << "[RAM price] ";
    std::cin >> price.RAM;
    std::cout << "[Quantity] ";
    std::cin >> quantity.x_RAM;
    clear();
    
    std::cout << "Simple PC Part Price Calculator [SPCPPC]\n\n";

    // Displays added cost of components * quantiy of components each.
    std::cout << "You need to save roughly $" << price.CPU * quantity.x_CPU + price.GPU * quantity.x_GPU + price.MOBO * quantity.x_MOBO + price.PSU * quantity.x_PSU + price.CASE * quantity.x_CASE + price.RAM * quantity.x_RAM << "." << "\n";
    exit(0);
}

int main()
{
    clear();

    // This program is for me to get a rough estimate on how much I need to save to build pc parts.
    std::cout << "Simple PC Part Price Calculator [SPCPPC]\n\n";
    fullBuild();
}