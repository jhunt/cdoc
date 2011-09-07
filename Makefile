src_html := src/html/header.html
src_html += src/html/footer.html
src_css  := src/css/style.css
src_js   := src/js/jquery.js
src_js   += src/js/local.js

all: cdoc

test: cdoc
	./cdoc *.c *.h > out.html
	find ../cfm -name '*.[ch]' 2>/dev/null | grep -v '/test/' | xargs ./cdoc --strip ../cfm/ > out2.html

cdoc: src/cdoc $(src_html) $(src_css) $(src_js)
	rm -f cdoc
	cat src/cdoc >> $@
	echo "__DATA__" >> $@
	echo "-header--------------------------------------------" >> $@
	cat src/html/header.html >> $@
	echo "-footer--------------------------------------------" >> $@
	cat src/html/footer.html >> $@
	echo "-css-----------------------------------------------" >> $@
	cat $(src_css) >> $@
	echo "-js------------------------------------------------" >> $@
	cat $(src_js) >> $@
	chmod 500 $@

clean:
	rm -f cdoc cdoc.css cdoc.js *.html
