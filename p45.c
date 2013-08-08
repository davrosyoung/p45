/* -*- C @(#) Dummy program for experimenting with emacs and gdb -*-e */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *getLine( FILE *);
char *toUpper( char* );

int main( int argc, char** argv )
{
  char *name;
  printf( "Hello World.\n" );
  printf( "Please enter your name:" );
  if ( ( name = getLine( stdin ) ) != NULL )
  {
    printf( "Hello %s\n", name );
    char *t = toUpper( name );
    printf( "Howdy \"%s\"", t );
  } else {
    printf( "That isn't very friendly!\n" );
  }
  exit( 0 );
}
