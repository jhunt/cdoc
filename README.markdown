cdoc - C Documentor
===================

`cdoc` is a small and uncomplicated tool that extracts strictly-formatted
documentation from C source files.  It is designed for ease of use and
themability, not to be a complete, feature-ful documentation system for
any and all C projects.

It is **definitely** not intended to replace tools like Doxygen.

It also doesn't work with other languages, even the *C-like* ones.

`cdoc` was original written to generate easy-to-read documentation for
[Clockwork][1], while maintaining the visual appeal of the project
web site.

Transformation from text into HTML is handled by a combination of Perl
regular expressions and Markdown.  The parser is pretty basic, and
expects your C code to follow certain conventions.

To see what is possible, run `make samples` and point your web browser
to `{path-to-codebase}/samples/index.html`.

Building and Installing cdoc
----------------------------

To build it, run `make`.

To install it, run `make install` - this just copies the `cdoc` script into
/usr/local/bin, which you can do by hand if you want to.  There are no other
files, no man pages, shared resources, or anything.

Oh yeah, you will need Perl, Text::Markdown and Getopt::Long.

Getting Help
------------

See `cdoc --help`

Author
------

`cdoc` was written by [James Hunt][2]

[1]: http://clockwork.niftylogic.com
[2]: http://jameshunt.us
