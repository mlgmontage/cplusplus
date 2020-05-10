#include <iostream>

using namespace std;

class Player
{
public:
   int x, y;

   int speed;

   void Move(int xa, int ya)
   {
      x += xa + speed;
      y += ya + speed;
   }
};

int main()
{

   Player player;
   player.x = 20;
   player.y = 20;

   return 0;
}
