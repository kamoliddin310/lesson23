#include<stdio.h>

int main(){
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if(input_file == NULL){
        perror("input file yuq");
        return 1;
    }

    int number, s = 0;

    for(int i = 0; i < 7; i++){
        fscanf(input_file, "%d", &number);
        s += number;
    }

    fprintf(output_file, "sof yig'indi = %d\n", s);

    fclose(input_file);
    fclose(output_file);

    return 0;
}