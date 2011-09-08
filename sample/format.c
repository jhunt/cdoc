/* Advanced formatting examples */

/**
  Formatting Example

  This "function" exists to showcase the formatting
  that is possible through the Markdown engine that
  `cdoc` uses.

  (You definitely want to cross-reference the source
   code on this one).

  ### Paragraphs ####################################

  Adjacent lines are collapsed into a single paragraph
  when output to HTML.  It
  doesn't
  matter how long the lines are
       or how much extraneous whitespace is
       present.

  Paragraphs are separated by at least one blank line
  (two newlines).

  ### Emphasis / Inline Styles ######################

  You can add emphasis to your documentation.

  Surround a word or phrase with asterisks (\*) or
  underscores (\_) to make it _stand out_.

  To get even more emphasis, double the asterisks /
  underscores: **like this**.

  For monospaced font, to represent commands or standard
  library function calls, surround the text with backticks
  (\`):  `chown(3)`.

  ### Lists #########################################

  Unordered lists can be created by:

  + Placing each item on a new line
  + Prefixing the item with a plus sign (\+),
    hyphen (\-) or asterisk (\*).
  + Wrapping multi-line list items in a way
    that seems most natural to you.

  Ordered lists are even easier:

  1. Place each item on a new line (like before)
  2. Precede each item with a number and a period (.)
  3. Enjoy!

  ### Code and Verbatim Examples ######################

  Sometimes, you just need to give out some example code
  to show how you *really* use the function or structure.
  Just wrap your code listing or verbatim output with
  HTML-like &lt;code&gt; tags:

  <code>
  int x = 1;
  char quote = '\'';
  long day = 1000L * 60L * 60L * 24L;
  </code>

  ### References ######################################

  With `cdoc`, you can pepper in-line references to function
  parameters and other functions.  For parameter / argument
  references, use the parameter name, preceded by '$':

  First parameter is $arg1.  Second parameter is $arg2.
  See prototype.

  To link out to another function, use the function name,
  prefixed with an 'at' sign (@):

  You may want to check out @foo for more eamples of formatting.

 */
int foo(int arg1, char *arg2)
{
	/** code not important here... */
}
