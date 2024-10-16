#include<stdio.h> // WAVE PRINT

int  main() {
    int a[5][6] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int r = 5;
    int c = 6;
    int minr  =0, maxr = r-1, minc = 0, maxc = c-1, tne = r*c, count = 0;
      for(int i =0; i<5;i++){
        for(int j =0; j<5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // SPIRAL PRINT
  //int minr  =0, maxr = r-1, minc = 0, maxc = c-1, tne = r*c, count = 0;
 while(count<tne){
    //print the min row
       for(int j =minc ; j<= maxc; j++){
        printf("%d ", a[minr][j]);
        count++;
        }
       minr++;
       if(count>=tne) break; // ISKE BINA EK EXTRA ELEMENT PRINT HOGA
      //print max column
      for(int i =minr; i<=maxr; i++){
        printf("%d ", a[i][maxc]);
        count++;
      }
     maxc--;
     if(count>=tne) break;
     // print max row
     for(int j = maxc ; j>=minc; j-- ){
        printf("%d ", a[maxr][j]);
        count++;
     }
     maxr--;
     if(count>=tne) break;
     // print min col
     for(int i = maxr; i>= minr; i--){
        printf("%d ", a[i][minc]);
        count++;
     }
     minc++;
    
     
    }
    return 0;
}
