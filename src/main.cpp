#include "raylib.h"

Vector2 GeoToScreen(float x, float y, float scale = 50.0f) {
    return { 400 + x * scale, 300 - y * scale };
}

int main() {
    InitWindow(800, 600, "Raylib Example");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Vector2 A = GeoToScreen(-3.31087, 5.08696);
        Vector2 B = GeoToScreen(-7.24154, -0.08596);
        Vector2 C = GeoToScreen(1.52831, -0.28991);

        DrawTriangle(A, B, C, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
