#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char str[256];
    int w,a;
    float h;
}Reindeers;
void strCopy(char* destino,char* origem){
    while(*origem!='\0'){
        *destino=*origem;
        destino++;
        origem++;
    }
    *destino='\0';
}
void setReindeer(Reindeer* r,char* str,int w,int a,float h){
    strCopy((*r).str,str);
    (*r).w=w;
    (*r).a=a;
    (*r).h=h;
}
int size(char* str){
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
void readline(char* str,int tam){
    fgets(str,tam,stdin);
    if(str[size(str)-1]==''\n){
        str[size(str)-1]='\0';
    }
}
void sort(Reinder* array){
    
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("CENARIO {%d}\n",i);
        int n,m;
        scanf("%d %d",&n,&m);
        getchar();
        Reindeers* totalArray=malloc(n*sizeof(int));
        Reindeers* sleighArray=malloc(m*sizeof(int));
        char str[256];
        int w,a;
        float h;
        for(int j=0;j<n;j++){
            readline(str,256);
            scanf("%d %d %f",&w,&a,&h);
            getchar();
            setReindeer(&totalArray[i],str,w,a,h);
        }
        sort(totalArray);
        
    }
    return 0;
}
