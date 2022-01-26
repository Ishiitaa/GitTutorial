/*
 * elephant_seals.c
 *
 * Developer: Nicholas Barry
 * Date:      17 Oct 2021
 *
 * Calculate the average weight for a population of elephant
 * seals read into an array.  I feel like I'm not fully using all of
 * the lessons with the way I've done it.  But I also don't really
 * know how to dynamically adjust the size of the weights_arr.  It's
 * no doubt also bad practice to declare an int after some precedural
 * junk is done, precluding the idea of first using a while statement
 * find the size of the elements.  Then declaring weights_arr[ele_size]
 * after the initial while loop.
 *
 */

#include <stdio.h>

double avg_weight( int ele_num, int weights_arr[] ){
    int        w;
    double     sum = 0.0;

    for ( w = 0; w < ele_num; w++) {
        sum += weights_arr[w];
    }

    return( sum/ele_num );
} /* avg_weight */

void print_weights( int ele_num, int weights_arr[] ){
    int p;

    printf("The number of seals is: %d\n", ele_num);
    for ( p = 0; p < ele_num; p++ ) {
        printf("%d\t", weights_arr[p]);
    }

} /* print_weights */

int main( void ) {
    int weights_arr[1500];
    int ele_num = 0;
    int x;

    while(scanf("%d", &x) == 1) {
        weights_arr[ele_num] = x;
        //printf("Number just read [%d]: %d\n", ele_num, x);
        ele_num++;
    }

    //printf("Number of elements: %d\n", ele_num);
    //printf("Artibrary element of the array: %d\n", weights_arr[754]);

    print_weights( ele_num, weights_arr );
    printf( "\n\n" );
    printf("The average weight is %.2f\n\n", avg_weight(ele_num, weights_arr));
    return 0;

} /* main */
