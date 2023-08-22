using namespace std;

#pragma once
class Map
{
  public:
        string map[20][20];

        Map() {
            for (int i = 0; i < 20; i++) {
                for (int y = 0; y < 20; y++) {
                    if (i == 0 || i == 19) {
                        map[i][y] = "-";
                    }
                    else if (y == 0 || y == 19) {
                        map[i][y] = "|";
                    }
                    else {
                        map[i][y] = ".";
                    }
                }
            }
        };

        void show_map() {
            for (int i = 0; i < 20; i++) {
                for (int y = 0; y < 20; y++) {
                    cout << map[i][y];
                }
                cout << endl;
            }
        };

};

