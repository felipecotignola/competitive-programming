#include <stdio.h>
int len(char* str){
    int cont=0;
    while(*str!='\0'){
        cont++;
        str++;
    }
    return cont;
}
void readline(char* str,int tam){
    fgets(str,tam,stdin);
    if(str[len(tam)-1]=='\n'){
        str[len(tam)-1]='\0';
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char str[256];
        readline(str,256);
        char array[50][200];
        int arrayndex=0,charIndex=0;
        for(int j=0;j<256;j++){
            if(str[j]==' '){
                arrayIndex++;
                charIndex=0;
            }
            else{
                array[arrayIndex][charIndex]=str[j];
            }
        }
      //for para ordenar o vetor de vetor de caractere 
        for(int j=1;j<=rrayIndex;j++){
            
        }
    }
}
