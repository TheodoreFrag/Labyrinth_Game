using namespace std;

class Map
{
    public:
        //Declare values
        int width = 20;
        int height = 40;
        char** map;

        //Creates dynamic array
        void set_map() {

            map = new char * [width];

            for (int i = 0; i < width; i++) {
                map[i] = new char[height];
            };

        };


        //Constructor that creates an empty map
        Map() {
            set_map();

            for (int i = 0; i < width; i++) {
                for (int y = 0; y < height; y++) {
                    if (i == 0 || i == width - 1) {
                        map[i][y] = '-';
                    }
                    else if (y == 0 || y == height - 1) {
                        map[i][y] = '|';
                    }
                    else {
                        map[i][y] = ' ';
                    }
                }
            }
        };

        //Void fuction that saws the map
        void show_map() {
            for (int i = 0; i < width; i++) {
                for (int y = 0; y < height; y++) {
                    cout << map[i][y];
                }
                cout << endl;
            }
        };

};

