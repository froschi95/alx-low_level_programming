#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 if alpha or 1 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
