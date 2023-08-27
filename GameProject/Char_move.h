#include "Map.h"

//Define Key arrows for user 
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

#define player 'P'

using namespace std;

class Char_move: public Map
{
public:
    //The constructor that creates a character ( x ) and reads the inmput from the user
    Char_move() {

        int x = 1 , y = 1;

        map[x][y] = player ;

        int c;
        while (1)


        {

            show_map();
            c = _getch();
            system("cls");
            switch (c) {
            case KEY_UP:
                map[x][y] = road ;
                x--;
                if (map[x][y] == wall_h || map[x][y] == wall_w ) {
                    x++;
                    map[x][y] = player ;
                    break;
                }
                else {
                    map[x][y] = player ;
                }
                break;
            case KEY_DOWN:
                map[x][y] = road ;
                x++;
                if (map[x][y] == wall_h || map[x][y] == wall_w) {
                    x--;
                    map[x][y] = player;
                    break;
                }
                else {
                    map[x][y] = player;
                }
                break;
            case KEY_LEFT:
                map[x][y] = road ;
                y--;
                if (map[x][y] == wall_h || map[x][y] == wall_w) {
                    y++;
                    map[x][y] = player;
                    break;
                }
                else {
                    map[x][y] = player;
                }
                break;
            case KEY_RIGHT:
                map[x][y] = road;
                y++;

                if (map[x][y] == wall_h || map[x][y] == wall_w ) {
                    y--;
                    map[x][y] = player;
                    break;
                }
                else {                    
                    map[x][y] = player;
                }
                break;

            };

        };
    }
};