#include<bits/stdc++.h>

using namespace std;

int main() {
    int chm, day;
    
    scanf("%d", &chm);
    int c[chm];

    for (int i = 0; i < chm; i++) {
        scanf("%d", &c[i]);
    }

    scanf("%d", &day);
    int d[day];

    for (int j = 0; j < day; j++) {
        scanf("%d", &d[j]);
    }

    for (int k = 0; k < day; k++) {
        int min = -1, max = -1;

        for (int l = 0; l < chm; l++) {
            if (c[l] < d[k]) {
                min = c[l];
            }
            if (c[l] > d[k]) {
                max = c[l];
                break;
            }
        }

        if (min == -1) {
            printf("X ");
        } else {
            printf("%d ", min);
        }

        if (max == -1) {
            printf("X\n");
        } else {
            printf("%d\n", max);
        }
    }

    return 0;
}
