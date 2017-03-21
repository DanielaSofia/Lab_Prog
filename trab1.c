#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "polin.h"

    Poli *add(Poli *a,Poli *b){
        float soma;
        
        if((a->m->u.m.e == b->m->u.m.e) && (a->m->u.m.exp == (b->m->u.m.exp))){
            soma = (a->m->u.m.coef) + (b->m->u.m.coef);
             Mon *new = mk_node(soma,a->m->u.m.e,a->m->u.m.exp);
        Poli *novo = mk_poli(new,b);
            return novo;
        }
       
        
        
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
    Poli *p=NULL;
    float coeficiente, coeficiente1;
    char *var=malloc(sizeof(char) * 128);
    char *var1=malloc(sizeof(char) * 128);
    int exp,exp1;
    
    int n;
    printf("Introduza o numero de monomios a inserir:");
    scanf("%d",&n);
   // p->size=n;
    printf("Introduz os monomios a inserir na lista:");
    //for(int i=0;i<1;i++)
     Mon *d;
     Mon *t;
    Poli *novo = mk_poli(d,p);
     Poli *novo1 = mk_poli(t,novo);
     for(;p!=NULL;p=p->next)
        scanf("%f %c %d", &coeficiente ,&var, &exp);
        scanf("%f %c %d", &coeficiente1 ,&var1, &exp1);
    
    //construtor
       d = mk_node(coeficiente,var,exp);
   t = mk_node(coeficiente1,var1,exp1);
    // Poli *novo = mk_poli(d,p);
    // Poli *novo1 = mk_poli(t,novo);
    Poli *sum = add(novo,novo1);
    //print
   toString(sum->m);
        
    
    
    return 0;
}

