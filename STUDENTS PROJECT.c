#include<stdio.h>
#define MAX_STUDENTS 200


 void Informations();
 void Affichage();
 void Moyenne();
 void Triage();
 void Affichage_Nom();


int main(){
printf("░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░░███╗███████╗");
printf("░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░████║██╔════");
printf("░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔████╔██║█████╗░░");
printf("░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚██╔╝██║██╔══╝░░");
printf("░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚═╝░██║███████╗");
printf("░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚══════╝\n");
 Informations();
 Affichage_Nom();
 Moyenne();
 Triage();
 Affichage();


 return 0;
}

int id[MAX_STUDENTS];
char Nom[MAX_STUDENTS][20];
char Prenom[MAX_STUDENTS][20];


int j;
float S,M;
float Math[MAX_STUDENTS],BDD[MAX_STUDENTS],SE[MAX_STUDENTS],Programming[MAX_STUDENTS];
float Avg[MAX_STUDENTS];


void Informations(){
for(int i=0;i<MAX_STUDENTS;i++){
    id[i]=i+1;
printf("id : %d \n",id[i]);

printf("Entrer le Nom de l'etudient Numero %d : ",i+1);
scanf("%s",&Nom[i]);

printf("Entrer le Prenom de l'etudient Numero %d : ",i+1);
scanf("%s",&Prenom[i]);

printf("Entrer la Note du Module de BDD et Outils Logiciels : ");
scanf("%f",&BDD[i]);

printf("Entrer la Note du Module de Algorithmique et Programmation C Avancee : ");
scanf("%f",&Programming[i]);

printf("Entrer la Note du Module de S.EX et Reseaux Informatique : ");
scanf("%f",&SE[i]);

printf("Entrer la Note du Module de Mathematiques 2 : ");
scanf("%f",&Math[i]);
}

}
void Affichage_Nom(){
    printf("    ________Les informations des etudients________    \n");
    for(int i=0;i<MAX_STUDENTS;i++){
    printf("- Le Nom et le Prenom de l'etudient Numero %d : %s %s\n",i+1,Nom[i],Prenom[i]);
    }
}

void Moyenne(){
    printf("    ________Le moyenne des etudients________    \n");
    for(int i=0;i<MAX_STUDENTS;i++){
        S=BDD[i]+Programming[i]+SE[i]+Math[i];
        Avg[i]=S/4;
       printf("La moyenne de %s %s est : %.2f \n",Nom[i],Prenom[i],Avg[i]);
    }
}

void Affichage(){
   int ID;
    printf("Entrer le id : ");
    scanf("%d",&ID);
        for(int i=0;i<MAX_STUDENTS;i++){
           if(ID==id[i]){
           printf("Le Nom de l'etudient est : %s \n",Nom[i]);
           printf("Le Prenom de l'etudient est : %s \n",Prenom[i]);
           printf("Sa moyenne est : %.2f \n",Avg[i]);
           printf("Leur notes : \n - BDD et Outils Logiciels : %.2f \n - Algorithmique et Programmation C Avancee : %.2f \n - S.EX et Reseaux Informatique : %.2f \n - Mathematiques 2 : %.2f \n",BDD[i],Programming[i],SE[i],Math[i]);

           }
    }
}
    void Triage(){
        int temp;
        for(int i=0;i<MAX_STUDENTS;i++){
            for(j=i+1;j<MAX_STUDENTS;j++){
              if(Avg[i]>Avg[j]){
                temp=Avg[i];
                Avg[i]=Avg[j];
                Avg[j]=temp;
                }

            }
        }
        printf("Le Triage des etudents par ordre croissant : \n");
      for(int i=0;i<MAX_STUDENTS;i++){
          printf(" - %s %s %.2f \n",Nom[i],Prenom[i],Avg[i]);
      }


        }
