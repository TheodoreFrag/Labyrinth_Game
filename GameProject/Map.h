using namespace std;

//Declare values
#define width 10
#define height 20
#define wall_w '-'
#define wall_h '|'
#define road ' '

//Create Class Map
class Map
{
    public:
        
        //Create array
        char** map;

        //Creates dynamic array
        void set_map() {

            map = new char * [width];

            for (int i = 0; i < width; i++) {
                map[i] = new char[height];
            };

        };

        //Create borders
        void map_borders()
        {
            for (int i = 0; i < width; i++) {
                for (int y = 0; y < height; y++) {
                    if (i == 0 || i == width - 1) {
                        map[i][y] = wall_w;
                    }
                    else if (y == 0 || y == height - 1) {
                        map[i][y] = wall_h;
                    }
                    else {
                        map[i][y] = road;
                    }
                }
            }
        };

        //Generate Layout
        void map_generator()
        {

            for (int i = 1; i < width - 1; i++) {
                for (int y = 1; y < height - 1; y++) {
                    if (i == 1 && y == 1) {
                        map[i][y] = road;
                    }
                    else if (map[i--][y] == road) {


                    }

                }
            }
        };
        

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

