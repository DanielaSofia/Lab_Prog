typedef struct Mon Mon;
    struct Mon{
        enum{Int,Monomio} flag;
        union {
            float cons;
            struct{
                    float coef;
                    char *e;
                    int exp;
                }m;
        }u;
    };
typedef struct Poli Poli;
    struct Poli{
        Mon *m;
        Poli *next;
       

    };    

    Poli *mk_poli(Mon *x,Poli *p){
        Poli *d=(Poli *) malloc(sizeof(Poli));
        d->m=x;   
        d->next=p;
        
        return d;
    }
        //inteiro
    Mon *mk_cons(float x){
        Mon *d=(Mon *) malloc(sizeof(Mon));
        d->flag=Int;
        d->u.cons=x;
        return d;
    }
    //monomio
    Mon *mk_node(float x, char *v,int r){
        Mon *d = (Mon *) malloc(sizeof(Mon));
        d->flag=Monomio;
        d->u.m.coef=x;
        d->u.m.exp=r;
        char *s=strdup(v);
        d->u.m.e=s;
        return d;
    }

    float getCoef(Mon *m){
        return (m->u.m.coef);
    }

    char *getVar(Mon *m){
       return (m->u.m.e);
    }

    int getExp(Mon *m){
        return (m->u.m.exp);
    }


    void toString(Mon *m){
         printf("%.2f %c %d",getCoef(m),getVar(m),getExp(m));
        
        
    }
    Mon *first(Poli *p){
        
        
        
    }

    Poli *rest(Poli *p){
        
        
        
        
    }

    void printnon(Mon *m){
        printf("%f %c %d",getCoef,getVar,getExp);
    }

    void printpol(Poli *p){
        
      for(;p!=NULL;p=p->next)
            printf("%d\n",p->m);
        
        
    }
