#include <cstdlib>
#include <raylib.h>

int main(int argc, char *argv[]) {
  const int Screenwidth = 800;
  const int Screenheight = 450;

  InitWindow(Screenwidth, Screenheight, "Guess-who");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);

    // q to quit
    if (IsKeyPressed(KEY_Q)) {
      exit(0);
    }

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
