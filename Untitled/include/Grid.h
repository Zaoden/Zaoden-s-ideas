#include <vector>
#include "Location.h"

class Grid{
public:
    Grid(int x, int y);
    void initialize_Grid(int x, int y);
    void write_Grid();

protected:

private:
    std::vector<idtoken> locate;

    int Grid_SizeX;
    int Grid_SizeY;
    int total_location_id;
};
