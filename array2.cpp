#include<stdio.h>
#include<string.h>
//array -> variabel yang menyimpan lebih dari 1 
//buah data yang memiliki tipe data yang sana

// elemen-elemen dalam arrray kita bisa akses 
// bredasarkan index

//array memiliki hubungan yang erat dalam pointer
// array ini dianggap sebagai pointer konstan karena
//ketika kita memanggil array

int main(){
	//int, float, double, char
	// index arrxy -> mulai dari 0
					// 0 1 2 3 4
					
//	int arr[15] = {1,2,3,4,5};
//	int arr[] = {1,2,3,4,5};
//	arr[0] = 7;
//	printf("%d\n", arr);
	
	int arr[] = {2,4,6,8,10};
	printf("index 2 %d\n", arr[2]);
	printf("pointer array %d\n", *arr);
	printf("pointer array %d\n", (*arr+1));
	
	// int -> menyimpan sebanyak 4 bytes
	// array -> 15 = 15*4 = 60 bytes
	
	//contoh
	// karena dalam array tersebut ada 5 variabel 
	// dan 1 int adalah 4 bytes maka,
	// 5*4 menjadi 20
	printf("size arr %d\n", sizeof(arr));
//	scanf("%d", &arr[0]);
//	
//	printf("%d", arr[0]);
	
	int arr2[15];
	printf("size arr %lld\n", sizeof(arr2));
	
	
	char str[10] = {'A', 'B', 'C'};
	// \0 sebagai tanda untuk mengakhiri string
//string
	char str2[10] = "ABC";
	printf("%s\n", str2);	
	
// string manipulation
	char str3[20] = "Binus";
	char str4[20];
	
	//dest, src
	strcpy(str4, str3); //strcpy berfungsi untuk mengcopy sebuah string
	printf("%s\n", str4);
	
	//concat -> gabungin string
		strcat(str4, " University");
		printf("%s\n", str4);
		
	//strlen -> menghitung panjang string
	int len = strlen(str4);
	printf("%d\n", len);
	
	int i = 0;
	while(str4[i]!='\0'){
		i++;
	}
	printf("len i %d\n", i);
//	1 2 3 4 5 6
//	A B C D E \0
	
	

	
	char newstr1 [20]= "Andi";
	char newstra [20]= "Budi";
	//strcmp -> string compare
	// string compare kalau nilainya 0 -> sama
	// kalau -1 (sebelah kiri lebih kecil) 
	// atau 1 (sebelah kiri lebih besar) artinya beda
	// true 1
	// false 0
	printf("\n%d", strcmp("AAAA","BAAA"));
	printf("\n%d", strcmp("BAAA","AAAA"));
	printf("\n%d", strcmp("AAAA","AAAA"));
	
	
	strlwr(newstr1);
	printf("\n%s\n", newstr1);
	
	strupr(newstr1);
	printf("%s\n", newstr1);
	
	return 0;
}
