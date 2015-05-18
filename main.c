#include <stdio.h>
#include <stdlib.h>
#define N 3
 struct s_ricetta {
        char nome [20];
        char descrizione [50];
        int pomodoro;
        int mozzarella;
        int glutine;
       
    };
    
    typedef struct s_ricetta ricetta;
    
    void bubbleSort (int i[], int tanti);
    
int main(int argc, char** argv) {
        
  int i;    
  ricetta v;   
for (i=0;i<N;i++) {
    printf("Inserisci il nome della ricetta: ");
    scanf("%s",v.nome);
    printf ("Inserisci la descrizione della ricetta: ");
    scanf("%s",v.descrizione);
    printf("Inserisci la quantita di pomodoro in gramm: ");
    scanf("%d",&v.pomodoro);
    printf("Inserisci la quantita di mozzarella in grammi: ");
    scanf ("%d",&v.mozzarella);
    printf("Con glutine(inserisca il numero 0 persi insersci qualsisi numero per no");
    scanf ("%d",& v.glutine);
   ;
                    }
  
  bubbleSort(int i,N);
  
if (v.glutine) {
    

 FILE *puntaFile;
puntaFile = fopen("nomi.txt","w+"); 
  for (i=0;i<N;i++) {
      scanf("%s",v.nome);
      scanf("%s",v.descrizione);
      scanf("%d",&v.pomodoro);
      scanf("%d",&v.mozzarella);
      scanf("%d",&v.glutine);
      
      
      
  }
fclose(puntaFile);
              }
else {
    FILE *puntaFile;
puntaFile = fopen("nomi.txt","w+"); 
  for (i=0;i<N;i++) {
      scanf("%s",v.nome);
      scanf("%s",v.descrizione);
      scanf("%d",&v.pomodoro);
      scanf("%d",&v.mozzarella);
      scanf("%d",&v.glutine);
      
      
      
  }
fclose(puntaFile);
}

  

  
  
  
            
    
    
    
    
    
    

    return (EXIT_SUCCESS);
}
  
void bubbleSort( int i[],int tanti) 
{
    
    ricetta v;
    int  x,y,temp;
    for (x=0;x < tanti-1;x++){
       for(y=0;x <tanti-1;y++)
       if(strcmp  > v.nome){
           temp = v.nome[y];
           v.nome[y] = v.nome[y+1]; 
           v.nome[y+1] = temp;
                   
                   
       }
   
    
     }
}    


