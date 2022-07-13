#include <stdio.h>
#include <stdlib.h>
int main(){
	system("cls");
    //Foydalanuvchi 2 ta qiymat kiritadi:
	// - harf
	// - n butun son

	// Siz esa, kiritilgan harf dan n ta keyingi harfni ekranga chiqaring.
	// * Katta harf kiritilsa, natija katta harf bo'lsin chiqarilsin
	// * Agar kiritilgan son 26 dan katta bo'lsa, harflar yana boshidan keladi. (Masalan: a 27 -> b)

	int shift;
	char belgi;

	printf(">>> ");
	scanf("%c %d",&belgi, &shift);

	if (belgi >= 'a' && belgi <= 'z'){
		printf(">>> %c", 'a' + (belgi + shift - 'a' ) % 26);
	}else if (belgi >= 'A' && belgi <= 'Z'){
		printf(">>> %c", 'A' + (belgi + shift - 'A' ) % 26);
	}else{
		printf("Bunday harf yo'q");
	}


    return 0;
}