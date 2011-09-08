/* Sample C code from K&R's _The C Programming Language_, 2nd ed. */

#define VTAB '\013'        /* ASCII vertical tab */
#define BELL '\007'        /* ASCII bell character */

/**
  Months of the year

  An enumeration is a list of constant integer values.

  The first name in an `enum` has value 0, the next 1, and so on,
  unless explicit values are specified.  If not all values are
  specified, unspecified values continue the progression from the
  last specified value.

  For example, `FEB` is 2, `MAR` is 3, etc.
 */
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
              JUL, AUG, SEP, OCT, NOV, DEC };

/**
  Raise $base to the $n-th power

  $n must be grater than or equal to 0.
 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p* base;
	return p;
}

/**
  Read a line into $s

  Reading stops at the first newline, or until
  $maxline-1 characters have been read.  $s will
  be terminated with '\0'.

  Returns the length of the string read into $s.
 */
int getline(char s[], int maxline)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c';
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/**
  Copy $from into $to

  This function assumes that $from is at least
  as large as $to, but does no error-checking.
 */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

/**
  Return the length of $s
 */
int strlen(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}

/**
  Concatenate $t to the end of $s

  Caller must ensure that $s is large enough to hold
  original contents plus $t.
 */
void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')    /* find end of s */
		i++;
	while ((s[i++] = t[j++]) != '\0')    /* copy t */
		;
}

/**
  Convert $c to lower case

  This function only supports the ASCII character set.
 */
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

/**
  Delete all $c from $s
 */
void squeeze(char s[], int c)
{
	int i, j;

	for (i =  = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
