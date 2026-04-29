#include <stdio.h>

int main(){
    int n1,n2,i,status,tampung;

    printf("NABILAH NUR AISYAH NUGROHO | 2510514020\n\n");
    printf("masukan jumlah elemen ke 1 :");
    scanf("%d",&n1);
    printf("masukan jumlah elemen ke 2 :");
    scanf("%d",&n2);

    int table1[n1];
    int table2[n2];
    int table3[(n1+n2)];

    for(i=0;i<n1;i++){
        printf("masukan isi ke 1 :");
        scanf("%d",&table1[i]);
    }

    for(i=0;i<n2;i++){
        printf("masukan isi ke 2 :");
        scanf("%d",&table2[i]);
    }

    // sorting table1
    do{
        status=0;
        for(i=0;i<n1;i++){
            if(table1[i]>table1[i+1]){
                tampung=table1[i];
                table1[i]=table1[i+1];
                table1[i+1]=tampung;
                status=1;
            }
        }
    }while(status==1);

    // sorting table2
    do{
        status=0;
        for(i=0;i<n2;i++){
            if(table2[i]>table2[i+1]){
                tampung=table2[i];
                table2[i]=table2[i+1];
                table2[i+1]=tampung;
                status=1;
            }
        }
    }while(status==1);

    int index1=0,index2=0,index3=0;

    while((index1<n1)&&(index2<n2)){
        if((table1[index1]<table2[index2])){
            table3[index3]=table1[index1];
            index1++;
            index3++;
        }else if(table2[index2]<table1[index1]){
            table3[index3]=table2[index2];
            index2++;
            index3++;
        }else{
            table3[index3]=table1[index1];
            index1++;
            index3++;
            table3[index3]=table2[index2];
            index2++;
            index3++;
        }
    }

    for(i=index1;i<n1;i++){
        table3[index3]=table1[i];
        index3++;
    }

    for(i=index2;i<n2;i++){
        table3[index3]=table2[i];
        index3++;
    }

    for(i=0;i<(n1+n2);i++){
        printf("isi ke 3 : %d \n",table3[i]);
    }

    return 0;
}