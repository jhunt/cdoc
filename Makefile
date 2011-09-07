src_html := src/html/header.html
src_html += src/html/footer.html
src_css  := src/css/style.css
src_js   := src/js/jquery.js
src_js   += src/js/local.js

ROOT:=/usr/local/bin

default: cdoc

install: cdoc
	install -m 0755 -o root -g root cdoc $(ROOT)/cdoc

samples: cdoc
	(cd sample && ../cdoc *.c *.h > index.html)
	@echo
	@echo "Point your browser to sample/index.html to see cdoc's handiwork"

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
	rm -f cdoc sample/cdoc.* sample/*.html
