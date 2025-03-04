#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;


int main() {
    std::ifstream f("../data/world.110.geojson");
    json data = json::parse(f);        
    std::cout << data << std::endl; 
}
