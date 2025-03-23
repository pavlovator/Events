#include <raylib.h>
#include <cmath>
#include "json.hpp"
#include <iostream>
#include <fstream>


using json = nlohmann::json;


int main() {
    std::ifstream f("../data/europe.geojson");
    json data = json::parse(f);
    std::cout << data["features"][40]["geometry"]["type"] << std::endl;
    std::cout << data["features"][40]["properties"]["NAME"] << std::endl;
    json a = data["features"][40]["geometry"]["coordinates"];
    

    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 800;
    int FPS = 30;
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Map");
    SetTargetFPS(FPS);
    // Simulation Loop
    while (!WindowShouldClose()) {
        // 1. Event Handling

        // 2. Updating State
        
        // 3. Drawing Objects
        BeginDrawing();
	        ClearBackground(WHITE);
            DrawText(TextFormat("Target FPS: %i \nCurrent FPS: %i", FPS, GetFPS()), 20, 20, 30, RED);
        EndDrawing();
    }    

    CloseWindow();
}
