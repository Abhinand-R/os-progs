#include <stdio.h>

int main() {
    int n, f, flag = 0, c = 0, hit = 0, miss = 0;
    printf("Enter the limit of references: ");
    scanf("%d", &n);
    printf("Enter the number of frames: ");
    scanf("%d", &f);
   
    int r[f], ref[n], time[f];
    printf("Enter the references:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ref[i]);
    }

    for (int i = 0; i < f; i++) {
        r[i] = -1;
        time[i] = 0;  
    }

    for (int i = 0; i < n; i++) {
        flag = 0;
       
       
        for (int j = 0; j < f; j++) {
            if (r[j] == ref[i]) {
                flag = 1;
                time[j] = i + 1;  
                break;
            }
        }

        if (flag == 1) {
            printf("Hit \t");
            for (int j = 0; j < f; j++) {
                printf("%d\t", r[j]);
            }
            hit++;
            printf("\n");
        } else {
         
            int min = time[0];
            int mindex = 0;
            for (int j = 1; j < f; j++) {
                if (time[j] < min) {
                    min = time[j];
                    mindex = j;
                }
            }

           
            r[mindex] = ref[i];
            time[mindex] = i + 1;  

            printf("Miss\t");
            for (int j = 0; j < f; j++) {
                printf("%d\t", r[j]);
            }
            miss++;
            printf("\n");
        }
    }

    printf("Hits-%d\n", hit);
    printf("Total page faults- %d\n", miss);

   
}
