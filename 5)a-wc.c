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
        if(argc==1)p{
            printf("\nLines are: %d\nCharacters are: %d\nWords are: %d\n",l,c,w);
        }else{
                for(int i=2;i<=argc;i++){
                        ch=argc[i]
                        switch(ch){
                                case "-l":printf("\nLines are %d:",l);
                                        break;
                                case "-w":printf("\nWords are %d:",w);
                                        break;
                                case "-c":printf("\nCharacters are %d",c);
                                default :printf("\nInvalid argument given");
                        }
                }
        }
}
