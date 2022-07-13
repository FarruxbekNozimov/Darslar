//Bismillahir Rahmanir Rahim

#include <stdio.h>
#include <string.h>

//Char massivning 0- elementi bilan oxirgisini
//Char massivning 1- elementi bilan oxirgidan bitta oldingi bilan
//almashtirib qo'ying

void print_array(char *array, int size,int nechi){
    int oxir = size - nechi;
    int son = array[oxir];
    array[oxir] = array[nechi];
    array[nechi] = son;
    printf("%s\n", array);
}

int main() {
    char gaps[100];
    scanf("%s", gaps);

    printf("%s\n", gaps);
    print_array(gaps, strlen(gaps)-1,0);
    print_array(gaps, strlen(gaps)-1,1);
    
}
