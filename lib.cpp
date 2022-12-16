using namespace std;
#include <iostream>
#include "lib.h"
int z=0;
void compila(char a[10][20]){
    for (int i=0; i<10; i++{
        for(int k=0;k<20;k++){
            a[i][k]=' ';
        }
    }
         for (int i=0; i<10;i++){
             cin>>a[i];
         }
         }
 void compiladue(char a[]){
     for (int k=0;k<20;k++){
         a[k]=' ';
     }
     cin>>a;
 }
       bool confronto(char a[][20],char n[]){
           for (z=0;z<10;z++){
               for (int k=0;k<20;k++){
                   if (a[z][k] != n[k])
                   {
                       break;
                   }
                   else if (k==19)
                   {
                       return true;
                   }
               }
           }return false
           }
         void finale (char a[10][20], char n[20]){
             if (confronto(a,n))
             {
                 cout<<z;
             }
             else
             {
                 cout<<"non presente";
             }
         }
