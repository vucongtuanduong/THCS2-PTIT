#include<stdio.h>

int main(){
    long input_number;
    FILE *fp = fopen("C01001.txt", "r+");
    fscanf(fp, "%ld", &input_number);
    fclose(fp);
    FILE *fpw = fopen("C01001_output.txt", "w+");
    
    fprintf(fpw, "%ld", input_number * 2);
    fclose(fpw);
    return 0;
}
