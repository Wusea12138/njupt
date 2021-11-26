#include <stdio.h>

char * Strcpy(char * src)
{
	int length = 0;
	for ( p = src ; p != NULL ; p ++ )
	{
		length ++;
	}
	
	char * t = (char*)malloc(sizeof(char)*(length+1));
	
	for ( int i = 0 ; i < length ; i ++ )
	{
		t[i] = src[i];
	}
	t[length] = '\0';
	
	return t;
}

int main(void) 
{
	char *s,*t;
	gets(s);
	t = Strcpy(s);
	puts(t);
	return 0;
}
