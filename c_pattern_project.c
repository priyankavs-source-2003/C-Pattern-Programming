/*  PATTERN PROGRAM USING 'C'

      NAME   : PRIYANKA V S
      DEPT   : CSE 3rd SEM
      USN    : 3BR21CS123
      ROLL NO: B - 122 */

#include<stdio.h>
#include<stdlib.h>
int printP[7][5];   //FUNCTION PROTOTYPE
int printR[7][5];
int printI[7][5];
int printY[7][8];
int printA[7][5];
int printK[7][5];
int printN[7][7];

void gap(){           //USED DEFINED FUNCTION
for(int i=0;i<4;i++){
    for(int j=0;j<1;j++)
    {
        printf("  ");
    }
}
} //end gap()

void printConsole(){    //USED DEFINED FUNCTION
    for(int i=0;i<7;i++){

    gap();
    for(int j=0;j<5;j++){
     char ch=printP[i][j];
     printf("%c",ch);
    }
       gap();
    for(int j=0;j<5;j++){
     char ch=printR[i][j];
     printf("%c",ch);
    }
     gap();
    for(int j=0;j<5;j++){
     char ch=printI[i][j];
     printf("%c",ch);
    }
     gap();
    for(int j=0;j<8;j++){
        char ch=printY[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
        char ch=printA[i][j];
        printf("%c",ch);
    }
     gap();
    for(int j=0;j<7;j++){
        char ch=printN[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
        char ch=printK[i][j];
        printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
    char ch=printA[i][j];
    printf("%c",ch);
    }
 printf("\n");
} // end top most for
} // end printConsole()

void P(){
for(int i=0;i<8;i++){
    for(int j=0;j<6;j++){
            if((j==0||i==0)||(i==3&&j<5)&&(i<4)||(j==4&&i<4))   //LOGIC FOR 'P'
                {
                printP[i][j]=42;
                }
            else{
                printP[i][j]=32;
                }
        }
    }
}

void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(((j==0 || j==4)&&(i!=0)) || ((i==0 || i==3)&&(j>0 && j<4))){
            printA[i][j]=42;
            }
        else{
            printA[i][j]=32;
            }
        }
    }
}

void I(){
for(int i=0;i<7;i++){
    for(int j=0;j<6;j++){
        if((j==2 || i==0 || i==6)){
            printI[i][j]=42;
            }
        else{
            printI[i][j]=32;
            }
        }
    }
}

void R(){
for(int i=0;i<7;i++){
    for(int j=0;j<6;j++){
            if((j==0)||(i==0)||(i==3&&j<5)&&(i<4)||(j==4&&i<4)||(i==4&&j==1)||(i==5&&j==2)||(i==6&&j==3))
            {
            printR[i][j]=42;
            }
            else{
            printR[i][j]=32;
            }
        }
    }
}

void Y(){
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
            if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(j==3)&&(i!=0&&i!=1)&&(i!=2)||(i==2&&j==4)||(i==1&&j==5)||(i==0&&j==6))
            {
            printY[i][j]=42;
            }
            else{
            printY[i][j]=32;
            }
        }
    }
}

void N(){
for(int i=0;i<8;i++){
    for(int j=0;j<7;j++){
            if((j==0)||(j==6)||(i==1&&j==1)||(i==3&&j==3)||(i==5&&j==5)||(i==2&&j==2)||(i==4&&j==4))
            {
            printN[i][j]=42;
            }
            else{
            printN[i][j]=32;
            }
        }
    }
}

void K(){
for(int i=0;i<8;i++){
    for(int j=0;j<6;j++){
            if((j==0)||(i==0&&j==4)||(i==1&&j==3)||(i==2&&j==2)||(i==3&&j==1)||(i==4&&j==2)||(i==5&&j==3)||(i==6&&j==4))
            {
            printK[i][j]=42;
            }
            else{
            printK[i][j]=32;
            }
        }
    }
}

int main()
{
P();
R();
I();
Y();
A();
N();
K();
A();
system("color 0B");
printConsole();
return 0;
}



