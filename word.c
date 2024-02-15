%{
  #include<stdio.h>
  int ic=0,sc=0,wc=0,cc=0;
%}
%%
[\n]{ic++;cc+=yyleng;}
[\t]{sc++;cc+=yyleng;}
[^\t\n]+{wc++;cc+=yyleng;}
%%
int main()
{
 printf("Enter the input:\n);
 yylex();
 printf("\n no of words are%d\n",wc);
 printf("\n no of characters are%d\n",wc);
 printf("\n no of newlines are%d\n",wc);
 printf("\n no of spaces are%d\n",wc);
