 #include <stdio.h>
  int main() {
        int d1, d2, distance;

        /* input distances from the user  */
        printf("Enter your value for distance1: ");
        scanf("%d", &d1);
        printf("Enter your value for distance2:");
        scanf("%d", &d2);

        /* Second distance is smaller than first distance */
        if (d2 < d1) {
                printf("Distance2 is smaller than Distance1\n");
                return 0;
        }

        /* distance between two points */
        distance = d2 - d1;
        printf("Distance between %d and %d is %d\n", d1, d2, distance);
        return 0;
  }



