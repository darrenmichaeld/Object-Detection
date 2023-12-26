#include "lab5_functions.h" // Include the declearation of the function

int area_size(const int arr[][MAX_DIMENSION], int row, int col, const int corner_points[]) {
    int area;
    area = (corner_points[2]-corner_points[0]+1)*(corner_points[3]-corner_points[1]+1);
    return area;
}