#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "polin.h"

    Poli add(Poli *a,Poli *b){
    }

    Poli derivate(Poli *p){
       
        for(;p!=NULL;p=p->next){
            switch(p->m->flag){
                case Int:{
                    p->m->u.cons=0;
                    }
                    break;
                case Monomio:
                    p->m->u.m.coef=(p->m->u.m.coef)*(p->m->u.m.exp);
                    p->m->u.m.exp--;
                    break;
            }
        }
    }

    Poli integ(Poli *p){
       // enum flage = p->m->flag;
        for(;p!=NULL;p=p->next){    
             switch(p->m->flag){
                case Int:{
                    Mon *new = mk_node(p->m->u.cons,"x",1);
                    //falta apontadores
                 
                    break;
                    }
                case Monomio:{ 
                    p->m->u.m.exp++;
                    p->m->u.m.coef=(p->m->u.m.coef)/(p->m->u.m.exp);
                    break;   
                 }       
            }  
        }

    }
/*
    Poli normalize(Poli *a){

    }*/

int main(){
    Poli *p=null;
    float coeficiente;
    char *var=malloc(sizeof(char) * 128);
    int exp;
    int n;
    printf("Introduza o numero de monomios a inserir:");
    scanf("%d",&n);
    p->size=n;
    printf("Introduz os monomios a inserir na lista:");
    //for(int i=0;i<1;i++)
     for(;p!=NULL;p=p->next)
        scanf("%f %c %d", &coeficiente ,&var, &exp);
    
    //construtor
        Mon *d = mk_node(coeficiente,var,exp);

    //print
   toString(d);
        
    
    
    return 0;
}

