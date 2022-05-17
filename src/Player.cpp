#include "../include/Player.h"

Player::Player(Rectangle playerRec, float jumpVelocity)
: _playerRectangle(playerRec), _playerJumpVelocity(jumpVelocity)
{ }
    
void Player::Tick(float deltaTime)
{
    if (IsKeyPressed(KEY_SPACE))
        Jump(deltaTime);

    DrawRectangle(_playerRectangle.x, _playerRectangle.y, _playerRectangle.width, _playerRectangle.height, GREEN);
}

void Player::Jump(float deltaTime)
{
    _playerRectangle.y -= _playerJumpVelocity * deltaTime;
}