#include <stdio.h>
#include <math.h>

int main() {
    int points[5][2];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &points[i][j]);
        }
    }

    int maxDistance = -1;
    int maxPoint1, maxPoint2;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            int distance = pow(points[j][0] - points[i][0], 2) + pow(points[j][1] - points[i][1], 2);

            if (distance > maxDistance) {
                maxDistance = distance;
                maxPoint1 = i;
                maxPoint2 = j;
            }
        }
    }

    printf("(%d, %d) and (%d, %d)",
           points[maxPoint1][0], points[maxPoint1][1],
           points[maxPoint2][0], points[maxPoint2][1]);

    return 0;
}