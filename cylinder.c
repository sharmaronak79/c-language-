#include <stdio.h>
#define PI 3.14159265

struct cylinder {
    double radius;
    double height;
    double weight;
    double volume;
};

void selection_sort(struct cylinder my_cylinders[], int n);

int main() {
    FILE *cFileIn, *cFileOut;
    double radius, height, weight, volume;

    struct cylinder my_cylinders[100];

    cFileIn = fopen("cylinders.txt", "r");
    if (cFileIn == NULL) {
        printf("Error opening file \n");
        return 1;
    }

    cFileOut = fopen("sorted_cylinders.txt", "w");
    if (cFileOut == NULL) {
        printf("Error opening  file \n");
        return 1;
    }

    fprintf(cFileOut, "#    Radius           Height          Volume          Weight\n");

    int i, counter = 0;
    for (i = 0; i < 6; i++) {   
        while (fscanf(cFileIn, "%lf, %lf, %lf, %lf\n", &radius, &height, &volume, &weight) != EOF) {
            my_cylinders[counter].radius = radius;
            my_cylinders[counter].height = height;
            my_cylinders[counter].volume = volume;
            my_cylinders[counter].weight = weight;

            volume = PI * radius * radius * height; 
            fprintf(cFileOut, "%-d\t  %-12.6lf\t  %-12.6lf\t  %-12.6lf\t   %-12.6lf\t \n", 
                    counter, radius, height, volume, weight);
            counter++;      
        }
    }

    selection_sort(my_cylinders, counter);
    printf("File sorted_cylinders.txt written \n");

    fclose(cFileIn);
    fclose(cFileOut);
    return 0;
}

void selection_sort(struct cylinder my_cylinders[], int n) {
    int i = 0, j = 0, min;
    struct cylinder temp;
    for (i = 0; i < n - 1; ++i) {
        min = i;
        for (j = i + 1; j < n; ++j) {
            if (my_cylinders[j].volume < my_cylinders[min].volume) {
                min = j;
            }
        }
        temp = my_cylinders[i];
        my_cylinders[i] = my_cylinders[min];
        my_cylinders[min] = temp;
    }   
}
