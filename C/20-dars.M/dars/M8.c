#include <stdio.h>

int main(){

    FILE * fp = fopen("players.txt", "w");

    fprintf(fp, "Messi\nRonaldo\nNeymar\nHazard\nRooney\nRonaldinho\nZidan\n");

    fclose(fp);
    remove("players.txt");

}