#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int number,hak1=5,hak2=10,hak3=20,hak1sayac=5;
    int  hak2sayac=10,hak3sayac=20,tahmin,seviye,puan;
    
    printf("\n Lütfen oyun seviyesini seciniz: ");
    scanf("%d",&seviye);
    
    switch(seviye)
    {
     case 1:
{system("cls"); // Ekranı temizle, oyun başlasın
    puts("==============================");
    puts("          ZOR SEVIYE          ");
    puts("==============================");
    printf("Hedef: 1-100 arasi sayi\nPuanlama: Her hak = 20 UP\n");
    puts("------------------------------");
     
    
    srand(time(NULL));
     number=(rand()%100)+1; //rastgele sayı burda üretildi
 int puan=0;
  
 printf("\n Tutulan sayiyi bulmak icin bes hakkin var\n");
   printf("\nHADI BAKALIM OYUN BASLIYOR!!!\n");

    while(hak1!=0){
    printf("\nTahmininizi giriniz:");
      scanf("%d",&tahmin);

      if(tahmin==number){printf("Tebrikler tutlan sayiyi dogru bildiniz\n");
         puan=hak1*20; 
         printf("Puaniniz sudur:%d\n",puan);
                break;}

       if(tahmin>number){
        printf("¨\nTahmininiz tutmadi.Daha kucuk sayi giriniz\n");

       }else
          printf("\nTahmininiz tutmadi.Daha buyuk sayi giriniz\n");
          printf("Su kadar hakkiniz kaldi:%d\n",--hak1sayac);
  hak1--;

    } printf("\n1. seviye icin oyun sona ermistir\n"); 
           break; }

 

  case 2:
{system("cls"); // Ekranı temizle, oyun başlasın
    puts("==============================");
    puts("          ORTA SEVIYE          ");
    puts("==============================");
    printf("Hedef: 1-100 arasi sayi\nPuanlama: Her hak = 10 UP\n");
    puts("------------------------------");
    
    srand(time(NULL));
     number=(rand()%100)+1; //rastgele sayı burda üretildi
 int puan=0;

 printf("\n Tutulan sayiyi bulmak icin on hakkin var\n");
printf("\nHADI BAKALIM OYUN BASLIYOR!!!\n");

    while(hak2!=0){
printf("\nTahmininizi giriniz:");
      scanf("%d",&tahmin);

      if(tahmin==number){printf("Tebrikler tutlan sayiyi dogru bildiniz\n");
         puan=hak2*10; 
         printf("Puaniniz sudur:%d\n",puan);
                break;}

       if(tahmin>number){
        printf("¨\nTahmininiz tutmadi.Daha kucuk sayi giriniz\n");

       }else
          printf("\nTahmininiz tutmadi.Daha buyuk sayi giriniz\n");
printf("Su kadar hakkiniz kaldi:%d\n",--hak2sayac);
 hak2--;

    } printf("\n2. seviye icin oyun sona ermistir\n"); break; }          



  case 3:
{system("cls"); // Ekranı temizle, oyun başlasın
    puts("==============================");
    puts("          KOLAY SEVIYE          ");
    puts("==============================");
    printf("Hedef: 1-100 arasi sayi\nPuanlama: Her hak = 5 UP\n");
    puts("------------------------------");
    
    srand(time(NULL));
     number=(rand()%100)+1; //rastgele sayı burda üretildi
 int puan=0;

 printf("\n Tutulan sayiyi bulmak icin yirmi hakkin var\n");
printf("\nHADI BAKALIM OYUN BASLIYOR!!!\n");

    while(hak3!=0){
printf("\nTahmininizi giriniz:");
      scanf("%d",&tahmin);

      if(tahmin==number){printf("Tebrikler tutlan sayiyi dogru bildiniz\n");
         puan=hak3*5; 
         printf("Puaniniz sudur:%d\n",puan);
                break;}

       if(tahmin>number){
        printf("¨\nTahmininiz tutmadi.Daha kucuk sayi giriniz\n");

       }else
          printf("\nTahmininiz tutmadi.Daha buyuk sayi giriniz\n");
printf("Su kadar hakkiniz kaldi:%d\n",--hak3sayac);
 hak3--;

    } printf("\n3. seviye icin oyun sona ermistir\n"); break; } 



    default:
    printf("\n Lutfen zorluk seviyesini duzgun seciniz(1-2-3)\n");
        break;

    } //switch sonu
}