#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1;i < n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}



void countsort(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int b[max + 1];
    for (i = 0; i <= max; i++) {
        b[i] = 0;
    }
    for (i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (i = 1; i <= max; i++) {
        b[i] += b[i - 1];
    }

    int c[n];
    for (i = n - 1; i >= 0; i--) {
        c[b[a[i]] - 1] = a[i];
        b[a[i]]--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}