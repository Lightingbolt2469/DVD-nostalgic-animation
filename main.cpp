#include <raylib.h>
#include <iostream>

using namespace std;

void Move(int &x, int &y, int &speedx, int &speedy, int texture_w, int texture_h, int window_w, int window_h) {
    x += speedx;
    y += speedy;

    if (x <= 0) {
        x = 0;
        speedx *= -1;
    } 
    else if (x + texture_w >= window_w) {
        x = window_w - texture_w;
        speedx *= -1;
    }

    if (y <= 0) {
        y = 0;
        speedy *= -1;
    } 
    else if (y + texture_h >= window_h) {
        y = window_h - texture_h;
        speedy *= -1;
    }
}

int main() {
    SetTraceLogLevel(LOG_NONE);
    cout << endl << "Starting the simulation...\n";

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(1200, 800, "DVD nostalgia");
    SetTargetFPS(60);

    Texture2D dvd = LoadTexture("Images/dvd.png");

    int dvd_width = (dvd.width > 0) ? dvd.width : 230;
    int dvd_height = (dvd.height > 0) ? dvd.height : 110;

    int dvd_x = 100;
    int dvd_y = 100;
    int dvd_speedx = 4;
    int dvd_speedy = 4;

    while (!WindowShouldClose()) {
        int current_w = GetScreenWidth();
        int current_h = GetScreenHeight();

        Move(dvd_x, dvd_y, dvd_speedx, dvd_speedy, dvd_width, dvd_height, current_w, current_h);

        BeginDrawing();
            ClearBackground(BLACK);
            DrawTexture(dvd, dvd_x, dvd_y, WHITE);
        EndDrawing();
    }

    cout << endl << "Closing the simulation...\n" << endl;
    UnloadTexture(dvd);
    CloseWindow();

    return 0;
}
