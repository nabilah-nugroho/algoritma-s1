#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[50];
    int nilai;
    char nama2[50];
    int nilai2;
}data;

int main(){
    data mahasiswa;
    int n1,n2,i;
    
    printf("NABILAH NUR AISYAH NUGROHO | 2510514020\n\n");
    printf("masukan jumlah elemen ke 1 :");
    scanf("%d",&n1);
    printf("masukan jumlah elemen ke 2 :");
    scanf("%d",&n2);

    data table1[n1];
    data table2[n2];
    data table3[(n1+n2)];

    for(i=0;i<n1;i++){
        printf("isi ke 1 :");
        scanf("%s",&table1[i].nama);
        scanf("%d",&table1[i].nilai);
    }

    for(i=0;i<n2;i++){
        printf("isi ke 2 :");
        scanf("%s",&table2[i].nama);
        scanf("%d",&table2[i].nilai);
    }

    for(i=0;i<n1;i++){
        table3[i]=table1[i];
    }

    for(i=0;i<n2;i++){
        table3[i+n1]=table2[i];
    }

    int status,tampung;
    char tampung2[100];

    do{
        status=0;
        for(i=0;i<(n1+n2);i++){
            if(table3[i].nilai > table3[i+1].nilai){
                tampung=table3[i].nilai;
                strcpy(tampung2,table3[i].nama);
                table3[i].nilai=table3[i+1].nilai;
                strcpy(table3[i].nama,table3[i+1].nama);
                table3[i+1].nilai=tampung;
                status=1;
            }
        }
    }while(status==1);

    for(i=0;i<(n1+n2);i++){
        printf("%s - %d\n",table3[i].nama,table3[i].nilai);
    }

    return 0;
}