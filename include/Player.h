#include "raylib.h"

class Player
{
public:
    Player(Rectangle playerRec, float jumpVelocity);
    void Tick(float deltaTime); // called every frame
    void Jump(float deltaTime);
private:
    Rectangle _playerRectangle{}; // placeholder player rec
    float _playerJumpVelocity{};
};