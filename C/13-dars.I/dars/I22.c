#include <stdio.h>

int main(){
    int sonlar[4][4]={
        {1, 9, 9, -100},
        {1, 9, 9, -100},
        {1, 9, 9, -100},
        {1, 9, 9, -100}
    };
    //4 2 -5 3 8 1 -7 9 0 6 -6 7 5 8 -4 2
    int quti, max=0 , a;
    int ustun = sizeof sonlar[0] / 4;
    int qator = sizeof sonlar / 4 / ustun;

    // for(int i=0 ; i < qator ; i++)
    //     for(int j=0 ; j < ustun ; j++)
    //         scanf("%d", &sonlar[i][j]);

    for(int i=0 ; i < qator ; i++){
        quti=0;
        for(int j=0 ; j < ustun ; j++){
            quti+=sonlar[j][i];
        }
        if(i == 0){
            max=quti;
            a=0;
        }else{
            if(max < quti){
                max=quti;
                a = i;
            }
            else
                max;
        }
    }
    printf("%d - ustun", a);
    return 0;
}