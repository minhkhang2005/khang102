#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    FILE *f1, *f2;
    f1 = fopen("input.txt", "r+");
    if(f1 == NULL){
        printf("Cannot open file !\n");
    }
    else{
        f2 = fopen("output.txt", "w");
        int n, x;
        fscanf(f1, "%d", &n);
        for(int i = 0; i < n; i++){
            fscanf(f1, "%d", &x);
            if(prime(x)){
                fprintf(f2, "%d ", x);
            }
        }
        fclose(f1); fclose(f2);
    }
    return 0;
}
