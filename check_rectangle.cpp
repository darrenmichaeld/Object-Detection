#include "lab5_functions.h" // Include the declearation of the function

bool check_rectangle(const int arr[][MAX_DIMENSION], int row, int col, int corner_points[]) {
    int check = 0;
    if(corner_points[0]!= corner_points[2] && corner_points[1]!= corner_points[3])
    {
        for(int i = corner_points[0]; i <= corner_points[2]; i++)
        {
            for(int j = corner_points[1]; j <= corner_points[3]; j++)
            {
                
                if(arr[i][j]== 1 && check == 0)
                {
                    check += 0;
                }
                else
                {
                    check += 1;
                }
            }
        }
        if(check == 0){
            return true;
        }
    
    }
    else{
        return false;
    }
    return false;
    }
 
