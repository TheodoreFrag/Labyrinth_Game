#include "Map.h"

//Define Key arrows for user 
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;

class Char_move: public Map
{
public:
    //The constructor that creates a character ( x ) and reads the inmput from the user
    Char_move() {

        int x = 1 , y = 1;

        map[x][y] = 'x';

        int c;
        while (1)
        {

            show_map();
            c = _getch();
            system("cls");
            switch (c) {
            case KEY_UP:
                map[x][y] = '.';
                x--;
                if (map[x][y] == '|' || map[x][y] == '-') {
                    x++;
                    map[x][y] = 'x';
                    break;
                }
                else {
                    map[x][y] = 'x';
                }
                break;
            case KEY_DOWN:
                map[x][y] = '.';
                x++;
                if (map[x][y] == '|' || map[x][y] == '-') {
                    x--;
                    map[x][y] = 'x';
                    break;
                }
                else {
                    map[x][y] = 'x';
                }
                break;
            case KEY_LEFT:
                map[x][y] = '.';
                y--;
                if (map[x][y] == '|' || map[x][y] == '-') {
                    y++;
                    map[x][y] = 'x';
                    break;
                }
                else {
                    map[x][y] = 'x';
                }
                break;
            case KEY_RIGHT:
                map[x][y] = '.';
                y++;

                if (map[x][y] == '|' || map[x][y] == '-') {
                    y--;
                    map[x][y] = 'x';
                    break;
                }
                else {                    
                    map[x][y] = 'x';
                }
                break;
            };

        };
    }
};