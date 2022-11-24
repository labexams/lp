#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[]){
        int w=0,c=0,l=0;
        char ch;
        FILE *fptr;
        fptr = fopen(argv[1],"r");
        while((ch=getc(fptr))!=EOF){
                if(ch==' '){
                        while(((ch=getc(fptr))!=EOF) || ((ch=getc(fptr))!=' ')){
                                c++;
                                break;
                        }
                        w++;
                        ungetc(ch,stdin);
                }
                if(ch=='\n'){
                        w++,l++;
                }
                c++;
        }
        printf("\nCharacters are %d\nWords are %d\nLines are %d",c,w,l);
}
