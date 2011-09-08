#ifndef TYPES_H
#define TYPES_H

/**
  A Data Type Structure

  This is a plain old struct.  The 'source' should
  be embedded between this paragraph and the summary
  above.
 */
struct datatype {
	char   *string;
	size_t  len;

	void   *user;  // Opaque pointer to user data
	void   *data;  // Opaque pointer to system data
}

/**
  A Typedef'd Data Type

  This is a structure that has been typedef'd into
  a new 'integral' type.  The full definition should
  be visible above.
 */
typedef struct {
	void   *left;
	void   *right;

	int     data;
} DataType;

/**
  An Enumeration

  This is an enumeration of values.
 */
enum type {
	TYPE1, TYPE2, TYPE3
};

/**
  A Typedef'd Enumeration

  Just like a regular enumeration, except it has been
  typedef'd into a new type.  Don't need the `enum`
  keyword anymore!
 */
typedef enum {
	TYPE10, TYPE20, TYPE30
} Type;

/**
  Preprocessor Macro Function
 */
#define MAX(a,b) ((a)>(b)?(a):(b))

#define TMP "/tmp"

/* These function prototypes will be documented
   in the types.c source file, not here. */
int function1(int param1);
void function2(char *string);

#endif
