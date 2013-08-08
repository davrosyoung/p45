#include "myutils.h"

#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *readLine( FILE *stream )
{
  char *result = NULL;
  int khar = -1;
  char* buffer = malloc( 80 );
  int i = 0;

  while( ( ( khar = fgetc( stream ) ) != -1 ) && ( i < 80 ) )
  {
      buffer[ i++ ] = khar;
  }

  if ( i > 0 )
  {
    buffer[ i++ ] = '\0';
    result = buffer;
  }

  return result;
}

char *toUpper( char *raw )
{
  char *result = NULL;
  bool changed = 0;
  int i = 0;

  if ( raw != NULL )
  {
      result = malloc ( strlen( raw ) + 1 );
      for( i = 0; i < strlen( raw ); i++ )
	{
	  if ( islower( raw[ i ] )
	   {
	      changed = 1;
	   }

	   result[ i ] = islower( raw[ i ] ) ? toupper( raw[ i ] ) : result[ i ];
	    } // end-FOR
	  result[ i ] = '\0';
	} // end-IF

  return result;
}
