#include <stdio.h>
 
int main(){
    
    //Foydalanuvchi harf kiritadi (English alphabet).
    // Kiritilgan harf unli yoki undosh ekanini ekranga chiqaring.
    char ch;
     
    printf("Harfni kiriting: ");
    scanf("%c",&ch);
     
    switch(ch){
        case 0 ... 96:
        case 123 ... 127:
            printf("Bunday harf yo'q");
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Unli\n");
            break;
        default:
            printf("Undosh\n",ch);            
    }
 
    return 0;
}
