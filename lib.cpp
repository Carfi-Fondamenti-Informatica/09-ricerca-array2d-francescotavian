using namespace std;
#include <iostream>
#include "lib.h"
int z=0;
void compila(char nomi[10][20]){
    for (int i=0; i<10; i++{
        for(int k=0;k<20;k++){
            nomi[i][k]=' ';
        }
    }
         for (int i=0; i<10;i++){
             cin>>nomi[i];
         }
         }
 void compiladue(char nomi[]){
     for (int k=0;k<20;k++){
         nomi[k]=' ';
     }
     cin>>nomi;
 }
       bool confronto(char nomi[][20],char n[]){
           for (z=0;z<10;z++){
               for (int k=0;k<20;k++){
                   if (nomi[z][k] != n[k])
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
         void finale (char nomi[10][20], char n[20]){
             if (confronto(nomi,n))
             {
                 cout<<z;
             }
             else
             {
                 cout<<"non presente";
             }
         }
