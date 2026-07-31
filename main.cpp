#include <raylib.h>
#include <iostream>

using namespace std;

void Move(int &x, int &y, int &speedx,int &speedy, int texture_w, int texture_h, int window_w, int window_h) {
    x += speedx;
    y += speedy;
    if (x <= 0 || x + texture_w >= window_w) {
        speedx *= -1;
    }
    if (y <= 0 || y + texture_h >= window_h) {
        speedy *= -1;
    }
}

int main() {
    SetTraceLogLevel(LOG_NONE);
    cout << endl <<  "Starting the simulation...\n";
    int dvd_x = 600;
    int dvd_y = 400;
    int dvd_speedx = 4;
    int dvd_speedy = 4;
    int dvd_width = 230;
    int dvd_height = 110;
    InitWindow(1200, 800, "DVD nostalgia");
    SetTargetFPS(60);
    Texture2D dvd = LoadTexture("Images/dvd.png");
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(BLACK);
        Move(dvd_x, dvd_y, dvd_speedx, dvd_speedy, dvd_width, dvd_height, GetScreenWidth(), GetScreenHeight());
        DrawTexture(dvd , dvd_x, dvd_y, WHITE);
        EndDrawing();
    }
    cout << endl <<  "Closing the simulation...\n" << endl;
    UnloadTexture(dvd);
    CloseWindow();
}