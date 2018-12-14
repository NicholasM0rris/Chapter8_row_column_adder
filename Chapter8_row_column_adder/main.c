//
//  main.c
//  Chapter8_row_column_adder
//
//  Created by Nicholas Morris on 14/12/18.
//  Copyright © 2018 Nicholas Morris. All rights reserved.
//

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

//#define N 5

int main(int argc, const char * argv[]) {

    //Initialize
   
    int i = 0,j = 0, sum = 0;
    int N;
    printf("Enter size of NxN array: ");
    scanf("%d", &N);
    int array[N][N];
    //Input user for row data N number of times (Number of columns)
    for(i = 0; i<N; i++){
        printf("Enter row %d: ", i+1);
        //Input the data into each row from user input
        for(j = 0; j<N; j++){
             scanf("%d", &array[i][j]);
        }

    }
    printf("Row totals: ");
    //Iterate over the rows
    for(i = 0; i<N; i++){
        sum = 0;
        //Iterate over columns
        for(j = 0; j<N; j++){
            sum += array[i][j];
        }
        printf("%d ", sum);
    }
    //Print the columns
    printf("\nColumn totals: ");
    for(i = 0; i<N; i++){
        sum = 0;
        //Iterate over columns
        for(j = 0; j<N; j++){
            //Switch i and j here to get column sums
            sum += array[j][i];
        }
        printf("%d ", sum);
    }
    puts("\n");
    
}
