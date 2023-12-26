#include "lab5_functions.h" // Include the declearation of the function


// detect corner points of the possible rectangle
// corner points are inclusive to the possible rectangle
// corner_points[0]: row index of the top left corner
// corner_points[1]: column index of the top left corner
// corner_points[2]: row index of the bottom right corner
// corner_points[3]: column index of the bottom right corner
void detect_corner(const int arr[][MAX_DIMENSION], int row, int col, int corner_points[]) {
int xreached = 0;
for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if(arr[i][j]== 1 && xreached == 0){
                corner_points[0] = i;
                corner_points[1] = j;
                xreached += 1;
            }
            else{
                continue;
            }
        }
    }
int yreached = 0;
for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; j--) {
            if(arr[i][j] == 1 && yreached == 0){
                corner_points[2] = i;
                corner_points[3] = j;
                yreached += 1;
                break;
            }
            else{
                continue;
            }
        }
    }
}