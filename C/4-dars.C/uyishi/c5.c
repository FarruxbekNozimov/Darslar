#include <stdio.h>
 
int main(){
    
    //Foydalanuvchi harf kiritadi (English alphabet).
    // Kiritilgan harf unli yoki undosh ekanini ekranga chiqaring.
    char ch;
     
    printf("Harfni kiriting: ");
    scanf("%c",&ch);
     
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Unli\n");
            break;
        case 98 ... 100:
        case 102 ... 104:
        case 106 ... 110:
        case 112 ... 116:
        case 118 ... 122:
            printf("Undosh\n");
            break;
        default:
            printf("Bunday harf yo'q???");            
    }
 
    return 0;
}
