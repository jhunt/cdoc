all: cdoc

test: cdoc
	./cdoc cert.* > out.html

tmp.css:
	cat src/css/*.css > $@

tmp.js: src/js/jquery.js src/js/local.js
	cat $+ > $@

cdoc: util/compile src/cdoc tmp.js tmp.css
	rm -f cdoc
	./util/compile
	chmod 500 cdoc
	rm -f tmp.css tmp.js

clean:
	rm -f cdoc tmp.* cdoc.css cdoc.js
	rm -f out.html
