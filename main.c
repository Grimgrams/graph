#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// size of matrix (length & width)
#define ROW 30
#define COLUMN 30

void graph(double m,  double b);

int main(int argc, const char *argv[]){
    graph(-0.1, 2);
}


void graph(double m,  double b){
    for(int row_count=0; row_count<=ROW;++row_count){
        for(int column_count=0;column_count<=COLUMN;++column_count){
            double x = (double)column_count - COLUMN / 2;
            double y = m * pow(x, 2) + b;

                int plot_row = ROW / 2 - (int)round(y);

            if (row_count == plot_row && column_count >= 0 && column_count < COLUMN){
                    printf("# ");
            } else if (row_count == ROW/2 && column_count == COLUMN/2){
             // starting point
             printf("X ");
            }else if(row_count == ROW/2 || column_count == COLUMN/2){
                    printf("* ");
                //y=-x+1
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
  }
