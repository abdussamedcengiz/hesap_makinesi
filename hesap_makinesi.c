

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main()

{setlocale(LC_ALL,"Turkish");

int secim;

char k;



menu:

    printf("Ýþlem Seciniz:\n");

    j:

printf("Toplam Ýcin : 1\nCikarma Ýcin : 2\nCarpma Ýcin : 3\nBolme Ýcin : 4\n");

int a,b,c,d;

scanf("%d",&secim);





switch(secim){

case 1:

	printf("\nToplama:\n");

	printf("a   b\n");

	printf("- + -=?\n ");

	printf("c  d\n");

    printf("a Sayýsýný Giriniz: ");

    scanf("%d",&a);



    printf("b Sayýsýný Giriniz: ");

    scanf("%d",&b);



e:

printf("c Sayýsýný Giriniz: ");

    scanf("%d",&c);

    if(c==0){

            printf("\nBölen sýfýr olamaz! yeni bir sayi giriniz\n");

        goto e;

    }

    d:

    printf("d Sayýsýný Giriniz: ");

    scanf("%d",&d);

     if(d==0){

            printf("\nBölen sýfýr olamaz!  yeni bir sayi giriniz\n");

        goto d;



    }  printf("\nÝslem sonucunuz:\n") ;   if(b==0){

        printf("%d   %d    %d\n",a,b,a);

printf("_ + _ =  _\n\n");

printf("%d   %d    %d",c,d,c);

goto bas;}

        if(a==0){

        printf("%d   %d    %d\n",a,b,b);

printf("_ + _ =  _\n\n");

printf("%d   %d    %d",c,d,d);

goto bas;

    }

printf("%d   %d   %d\n",a,b,a*d+c*b);

printf("_ + _ =  _\n\n");

printf("%d   %d   %d",c,d,c*d);

break;

case 2:

	printf("\nCikarma:\n");

	printf("a   b\n");

	printf("- - -=?\n ");

	printf("c  d\n");

	  printf("a Sayýsýný Giriniz: ");

    scanf("%d",&a);



    printf("b Sayýsýný Giriniz: ");

    scanf("%d",&b);



u:

printf("c Sayýsýný Giriniz: ");

    scanf("%d",&c);

    if(c==0){

            printf("\nBölen sýfýr olamaz! yeni bir sayi giriniz\n");

        goto u;

    }

    s:

    printf("d Sayýsýný Giriniz: ");

    scanf("%d",&d);

     if(d==0){

            printf("\nBölen sýfýr olamaz!  yeni bir sayi giriniz\n");

        goto s;



    }   printf("\nÝslem sonucunuz:\n");   if(b==0){

        printf("%d   %d    %d\n",a,b,a);

printf("_ - _ =  _\n\n");

printf("%d   %d    %d",c,d,c);

goto bas;}

        if(a==0){

        printf("%d   %d    %d\n",a,b,b);

printf("_ - _ =  _\n\n");

printf("%d   %d    %d",c,d,d);

goto bas;

    }

printf("%d   %d   %d\n",a,b,a*d-c*b);

printf("_ - _ =  _\n\n");

printf("%d   %d   %d",c,d,c*d);

break;

case 3:

	printf("\Carpma:\n");

	printf("a   b\n");

	printf("- × -=?\n ");

	printf("c  d\n");

	  printf("a Sayýsýný Giriniz: ");

    scanf("%d",&a);



    printf("b Sayýsýný Giriniz: ");

    scanf("%d",&b);



r:

printf("c Sayýsýný Giriniz: ");

    scanf("%d",&c);

    if(c==0){

            printf("\nBölen sýfýr olamaz! yeni bir sayi giriniz\n");

        goto r;

    }

    w:

    printf("d Sayýsýný Giriniz: ");

    scanf("%d",&d);

     if(d==0){

            printf("\nBölen sýfýr olamaz!  yeni bir sayi giriniz\n");

        goto w;



    }      if(b==0){

        printf("%d   %d    %d\n",a,b,a);

printf("_ × _ =  _\n\n");

printf("%d   %d    %d",c,d,c);

goto bas;}printf("\nÝslem sonucunuz:\n");

        if(a==0){

        printf("%d   %d    %d\n",a,b,b);

printf("_ × _ =  _\n\n");

printf("%d   %d    %d",c,d,d);

goto bas;

    }

printf("%d   %d   %d\n",a,b,a*b);

printf("_ × _ =  _\n\n");

printf("%d   %d   %d",c,d,c*d);

break;

case 4:

	printf("\nBolme:\n");

	printf("a   b\n");

	printf("- / -=?\n ");

	printf("c  d\n");

	  printf("a Sayýsýný Giriniz: ");

    scanf("%d",&a);

    o:

    printf("b Sayýsýný Giriniz: ");

    scanf("%d",&b);

     if(b==0){

            printf("\nBölen sýfýr olamaz!  yeni bir sayi giriniz\n");

        goto o;



    }    





n:

printf("c Sayýsýný Giriniz: ");

    scanf("%d",&c);

    if(c==0){

            printf("\nBölen sýfýr olamaz!  yeni bir sayi giriniz\n");

        goto n;



    }    

    

    printf("d Sayýsýný Giriniz: ");

    scanf("%d",&d);

        if(b==0){

        printf("%d   %d    %d\n",a,b,a);

printf("_ / _ =  _\n\n");

printf("%d   %d    %d",c,d,c);

goto bas;}printf("\nÝslem sonucunuz:\n");

        if(a==0){

        printf("%d   %d    %d\n",a,b,b);

printf("_ / _ =  _\n\n");

printf("%d   %d    %d",c,d,d);

goto bas;

    }

printf("%d   %d   %d\n",a,b,a*d);

printf("_ / _ =  _\n\n");

printf("%d   %d   %d",c,d,c*b);

break;default:printf("\nGecersiz Bir Ýslem Girdiniz.\nLutfen tekrar secim yapiniz\n");goto j;



}

bas:

printf("\nBaþka bir Ýþlem Yapmak Ýstiyor musunuz?(y/n)\n");

scanf(" %c",&k);

if(k=='y'){

    goto menu;

}else if(k=='n'){

goto cikis;

}else{

    printf("\nYanlýs secim yaptýnýz.Lutfen y ya da n giriniz.\n");

goto bas;

}



cikis:

	printf("Baska bir islem yapmak istemediginizi belirtiniz.");

	

	

		

	

    return 0;

}

