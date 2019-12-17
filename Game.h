#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Tabella.h"
#include "Nave.h"
#include <iostream>

class Game
{
public:
  Game();
  bool Generate();
  bool Start();
  void Endgame();


private:
  Human _player1;
  Human _player2;

};



#endif
