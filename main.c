//Nama     : Anugrah Tri Ramadhan
//NIM      : A11.2018.11540
//Kelompok : A11.4118
#include <stdio.h>
#include <stdlib.h>

int main()
{
int daerah,a,b,c,d,inputan,inputan1,inputan2,inputan3;
int total1=0,total2=0,total3=0,total33,total4=0;
int e,f=0,g,h=0,i,j=0,m,n=0;
float ttlglpt4,k,o;
int inputan4no1,inputan4no2,sum4no1=0,sum4no2=0;
int inputan3no1,inputan3no2,sum3no1=0,sum3no2=0;
int inputan2no1,inputan2no2,sum2no1=0,sum2no2=0;
int inputan1no1,inputan1no2,sum1no1=0,sum1no2=0;
printf("-------------------------------------Data Pemilih Pemilu 2019------------------------------------- \n");
puts(" ");
printf("Pilh salah satu \n");
printf("1. Seluruh Indonesia \n");
printf("2. Indoneia Bagian Barat \n");
printf("3. Indoneia Bagian Tengah \n");
printf("4. Indoneia Bagian Timur \n");
printf("Masukkan Nomor Daerah yang Diinginkan: "); scanf("%d",&daerah);
int array[34]={3453990,9426220,3477311,3723564,1186208,2410660,5821160,5914926,913934,1382760,7211891,32636846,7452971,27430269,2695805,30554761,3544582,1737480,429338,2386200,2754291,3030657,3573096,3289174,842005,1901556,5972161,1685377,429338,791315,1207994,789123,3517447,730981};
int array1[18]={3453990,9426220,3477311,3723564,1186208,2410660,5821160,5914926,913934,1382760,7211891,32636846,7452971,27430269,2695805,30554761,3544582,1737480};
int array2[12]={429338,2386200,2754291,3030657,3573096,3289174,842005,1901556,5972161,1685377,429338,791315};
int array3[4]={1207994,789123,3517447,730981};
switch(daerah)
{
case 1:
    for(e=0; e<34; e++)
    {
        f+=array[e];
    }
    printf("Jumlah pemilih yang akan memilih Diseluruh Indonesia Adalah:%d suara \n",f);
    printf("Seluruh provinsi di Indonesia \n");
    printf("1. Nanggroe Aceh Darusallam \n");
    printf("2. Sematra Utara \n");
    printf("3. Sumatra Barat \n");
    printf("4. Riau \n");
    printf("5. Kepualuan Riau \n");
    printf("6. Jambi \n");
    printf("7. Sumatra Selatan \n");
    printf("8. Lampung \n");
    printf("9. Bangka Belitung \n");
    printf("10. Bengkulu \n");
    printf("11. DKI Jakarta \n");
    printf("12. Jawa Barat \n");
    printf("13. Banten \n");
    printf("14. Jawa Tengah \n");
    printf("15. DI Yogyakarta \n");
    printf("16. Jawa Timur \n");
    printf("17. Kalimantan Barat \n");
    printf("18. Kalimantan Tengah \n");
    printf("19. Kalimantan Utara \n");
    printf("20. Kalimantan Timur \n");
    printf("21. Kalimantan Selatan \n");
    printf("22. Bali \n");
    printf("23. Nusa Tanggara Barat \n");
    printf("24. Nusa Tenggara Timur \n");
    printf("25. Sulawesi Barat \n");
    printf("26. Sulawesi Tengah \n");
    printf("27. Sulawesi Selatan \n");
    printf("28. Sulawesi Tenggara \n");
    printf("29. Sulawesi Utara \n");
    printf("30. Gorontalo \n");
    printf("31. Maluku \n");
    printf("32. Maluku Utara \n");
    printf("33. Papua \n");
    printf("34. Papua Barat \n");

    for( d=0; d<=33; d++)
    {
        printf("\nMasukkan Banyak Pemilih pada daerah bernomor %d. ",d+1); scanf("%d",&inputan1);
        printf("pemilih paslon nomor 1 pada daerah bernomor %d. ",d+1); scanf("%d",&inputan1no1);
        printf("pemilih paslon nomor 2 pada daerah bernomor %d. ",d+1); scanf("%d",&inputan1no2);
        if(inputan1no1>inputan1no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.1",d+1);
        }
        else if(inputan1no1<inputan1no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.2",d+1);
        }
        else
        {
            printf("Perolehan suara pada daerah %d sama",d+1);
        }
        sum1no1+=inputan1no1;
        sum1no2+=inputan1no2;
        printf(" \n");
        printf(" \n");
        if(inputan1no1+inputan1no2>inputan1)
        {
            printf("INPUTAN SALAH \n");
            break;
        }
        printf("\n");
        if(inputan1>array[d])
        {
            printf("Inputan melebihi batas \n");
            break;
        }
        total1+=inputan1;
    }
        printf("Total suara yang masuk: %d suara \n",total1);
        printf("Total Pemilih Pasangan No.1 : %d\n",sum1no1);
        printf("Total Pemilih Pasangan No.2 : %d\n",sum1no2);
        if(sum1no1>sum1no2)
        {
            printf("Perolahan suara di seluruh Indonesia dimenangkan pasangan no.1\n");
        }
        else if(sum1no1<sum1no2)
        {
           printf("Perolahan suara di seluruh Indonesia dimenangkan pasangan no.2\n");
        }
        else
        {
            printf("Perolehan suara seluruh indonesia sama\n");
        }
        int TotalGolputWilSeluruh = f-total1;
        printf("Sebanyak %d pemilih golput \n",TotalGolputWilSeluruh);
        float presentaseGolputWilSeluruh = ((float)TotalGolputWilSeluruh/(float)f)*100;
        printf("%f pemilih tecatat golput \n",presentaseGolputWilSeluruh);
    break;

case 2:
    for(g=0; g<18; g++)
    {
    h+=array1[g];
    }
    printf("Jumlah pemilih yang akan memilih seluruh di Indonesia bagian barat Adalah:%d suara \n",h);
    printf("Seluruh provinsi di Indonesai bagian barat \n");
    printf("1. Nanggroe Aceh Darusallam \n");
    printf("2. Sematra Utara \n");
    printf("3. Sumatra Barat \n");
    printf("4. Riau \n");
    printf("5. Kepualuan Riau \n");
    printf("6. Jambi \n");
    printf("7. Sumatra Selatan \n");
    printf("8. Lampung \n");
    printf("9. Bangka Belitung \n");
    printf("10. Bengkulu \n");
    printf("11. DKI Jakarta \n");
    printf("12. Jawa Barat \n");
    printf("13. Banten \n");
    printf("14. Jawa Tengah \n");
    printf("15. DI Yogyakarta \n");
    printf("16. Jawa Timur \n");
    printf("17. Kalimantan Barat \n");
    printf("18. Kalimantan Tengah \n");

    for( a=0; a<=17; a++)
    {
        printf("\nMasukkan Banyak Pemilih pada daerah bernomor %d. ",a+1); scanf("%d",&inputan);
        printf("pemilih paslon nomor 1 pada daerah bernomor %d. ",a+1); scanf("%d",&inputan2no1);
        printf("pemilih paslon nomor 2 pada daerah bernomor %d. ",a+1); scanf("%d",&inputan2no2);
        if(inputan2no1>inputan2no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.1",a+1);
        }
        else if(inputan2no1<inputan2no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.2",a+1);
        }
        else
        {
            printf("Perolehan suara pada daerah %d sama",a+1);
        }
        sum2no1+=inputan2no1;
        sum2no2+=inputan2no2;
        printf(" \n");
        printf(" \n");
        if(inputan2no1+inputan2no2>inputan)
        {
            printf("INPUTAN SALAH \n");
            break;
        }
        printf("\n");
        if(inputan>array1[a])
        {
            printf("Inputan melebihi batas \n");
            break;
        }
        total2+=inputan;
    }
        printf("Total suara yang masuk: %d suara \n",total2);
        printf("Total Pemilih Pasangan No.1 : %d\n",sum2no1);
        printf("Total Pemilih Pasangan No.2 : %d\n",sum2no2);
        if(sum2no1>sum2no2)
        {
            printf("Daerah Indonesia bagian barat dimenangkan pasangan no.1\n");
        }
        else if(sum2no1<sum2no2)
        {
           printf("Daerah Indonesia bagian barat dimenangkan pasangan no.2\n");
        }
        else
        {
            printf("Pada daerah indonesia bagian barat perolehan suara sama\n");
        }
        int TotalGolputWil2 = h-total2;
        printf("Sebanyak %d pemilih golput \n",TotalGolputWil2);
        float presentaseGolputWil2 = ((float)TotalGolputWil2/(float)h)*100;
        printf("%f persen pemilih tercatat golput \n",presentaseGolputWil2);

        break;
case 3:
    for(m=0; m<12; m++)
    {
        n+=array3[m];
    }
    printf("Jumlah pemilih yang akan memilih seluruh di Indonesia bagian tengah Adalah:%d \n",n);
    printf("Seluruh provinsi di Indonesai bagian tengah \n");
    printf("1. Kalimantan Utara \n");
    printf("2. Kalimantan Timur \n");
    printf("3. Kalimantan Selatan \n");
    printf("4. Bali \n");
    printf("5. Nusa Tanggara Barat \n");
    printf("6. Nusa Tenggara Timur \n");
    printf("7. Sulawesi Barat \n");
    printf("8. Sulawesi Tengah \n");
    printf("9. Sulawesi Selatan \n");
    printf("10. Sulawesi Tenggara \n");
    printf("11. Sulawesi Utara \n");
    printf("12. Gorontalo \n");

    for(b=0; b<=11; b++)
    {
        printf("\nMasukkan Banyak Pemilih pada daerah bernomor  %d. ",b+1); scanf("%d",&inputan2);
        printf("pemilih paslon nomor 1 pada daerah bernomor %d. ",b+1); scanf("%d",&inputan3no1);
        printf("pemilih paslon nomor 2 pada daerah bernomor %d. ",b+1); scanf("%d",&inputan3no2);
        if(inputan3no1>inputan3no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.1",b+1);
        }
        else if(inputan3no1<inputan3no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.2",b+1);
        }
        else
        {
            printf("Perolehan suara pada daerah %d sama",b+1);
        }
        sum3no1+=inputan3no1;
        sum3no2+=inputan3no2;
        if(inputan3no1+inputan3no2>inputan2)
        {
            printf("INPUTAN SALAH \n");
            break;
        }
        total3+=inputan2;
    }
        printf("\nTotal Suara Yang masuk: %d suara \n",total3);
        printf("Total Pemilih Pasangan No.1 : %d\n",sum3no1);
        printf("Total Pemilih Pasangan No.2 : %d\n",sum3no2);
        if(sum3no1>sum3no2)
        {
            printf("Daerah Indonesia bagian tengah dimenangkan pasangan no.1\n");
        }
        else if(sum3no1<sum3no2)
        {
           printf("Daerah Indonesia bagian tengah dimenangkan pasangan no.2\n");
        }
        else
        {
            printf("Pada daerah indonesia bagian tengah perolehan suara sama\n");
        }
        o=n-total3;
        printf("Sebanyak %.0f pemilih golput \n",o);
        float presentase = (o/n)*100;
        printf("%f persen pemilih tercatat golput", presentase);

    break;
case 4:
    for(i=0; i<4; i++)
    {
        j+=array3[i];
    }
        printf("Jumlah pemilih yang akan memilih seluruh di Indonesia bagian timur Adalah %d \n",j);
        printf("1. Maluku \n");
        printf("2. Maluku Utara \n");
        printf("3. Papua \n");
        printf("4. Papua Barat \n");
        for(c=0; c<=3; c++)
        {
        printf("\nMasukkan Banyak Pemilih pada daerah bernomor %d. ",c+1); scanf("%d",&inputan3);
        printf("pemilih paslon nomor 1 pada daerah bernomor %d. ",c+1); scanf("%d",&inputan4no1);
        printf("pemilih paslon nomor 2 pada daerah bernomor %d. ",c+1); scanf("%d",&inputan4no2);
        if(inputan4no1>inputan4no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.1",c+1);
        }
        else if(inputan4no1<inputan4no2)
        {
            printf("daerah no.%d dimenangkan pasangan no.2",c+1);
        }
        else
        {
            printf("Perolehan suara pada daerah %d sama",c+1);
        }
        sum4no1+=inputan4no1;
        sum4no2+=inputan4no2;
        printf(" \n");
        if(inputan4no1+inputan4no2>inputan3)
        {
            printf("INPUTAN SALAH \n");
            break;
        }
        printf(" \n");
        if(inputan3>array3[c])
        {
            printf("Inputan melebihi batas \n");
            break;
        }
        total4+=inputan3;
        }
        printf("\nTotal Suara Yang masuk:%d suara \n",total4);
        printf("Total Pemilih Pasangan No.1 : %d\n",sum4no1);
        printf("Total Pemilih Pasangan No.2 : %d\n",sum4no2);
        if(sum4no1>sum4no2)
        {
            printf("Daerah Indonesia bagian timur dimenangkan pasangan no.1\n");
        }
        else if(sum4no1<sum4no2)
        {
           printf("Daerah Indonesia bagian timur dimenangkan pasangan no.2\n");
        }
        else
        {
            printf("Pada daerah indonesia bagian timur perolehan suara sama\n");
        }
        k=j-total4;
        printf("Sebanyak %.0f pemilih golput \n",k);
        ttlglpt4=k/j*100;
        printf("%f persen pemilih tercatat golput",ttlglpt4);

    break;
    default :
    printf("SALAH!");
    break;


}
    return 0;
}
