using namespace std;

#define width 10
#define height 20
#define wall_w '--'
#define wall_h '|'

class Map


{
    public:
        //Declare values

        char** map;

        //Creates dynamic array
        void set_map() {

            map = new char * [width];

            for (int i = 0; i < width; i++) {
                map[i] = new char[height];
            };

        };

        void map_borders()
        {
            for (int i = 0; i < width; i++) {
                for (int y = 0; y < height; y++) {
                    if (i == 0 || i == width - 1) {
                        map[i][y] = '--';
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

        void map_generator()
        {
        
            for (int i = 0; i < width; i++) {
                for (int y = 0; y < height; y++) {
                    if (i == 0 || i == width - 1) {
                        map[i][y] = '--';
                    }
                    else if (y == 0 || y == height - 1) {
                        map[i][y] = '|';
                    }
                    else {
                        map[i][y] = ' ';
                    }
                }
            }

        }

        //Constructor that creates an empty map
        Map() {
            set_map();
            map_borders();

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

