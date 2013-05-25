# cdoc

VERSION := 1.0.18

INSTALL := /usr/bin/install
INSTALL_DIR := $(INSTALL) -d
INSTALL_BIN := $(INSTALL) -m 0755

MANIFY := /usr/bin/pod2man
MAN1DIR := /usr/share/man/man1

BINDIR := /usr/bin

TARBALL := cdoc-$(VERSION).tar.gz
TARDIR  := cdoc-$(VERSION)

src_html := src/html/header.html
src_html += src/html/footer.html

src_css  := src/css/style.css

src_js   := src/js/jquery.js
src_js   += src/js/local.js

ROOT:=/usr/local/bin

build: bin/cdoc

test:
	# nothing to do for test

manifest:
	# nothing to do for manifest

version:
	@echo $(VERSION)

install: build
	@echo installing to $(DESTDIR)/
	$(INSTALL_DIR) $(DESTDIR)$(BINDIR)
	$(INSTALL_BIN) bin/cdoc $(DESTDIR)$(BINDIR)/cdoc
	$(INSTALL_DIR) $(DESTDIR)$(MAN1DIR)
	$(MANIFY) bin/cdoc $(DESTDIR)$(MAN1DIR)/cdoc.1

dist:
	rm -rf $(TARDIR)
	mkdir -p $(TARDIR)
	cp -a src sample $(TARDIR)
	cp -a Makefile README.markdown TODO $(TARDIR)
	tar -czf $(TARBALL) $(TARDIR)
	rm -rf $(TARDIR)
	tar -tzf $(TARBALL)

distfile:
	@echo $(TARBALL)

samples: bin/cdoc
	./bin/cdoc sample/*.c sample/*.h -R sample --strip sample/
	@echo
	@echo "Point your browser to sample/index.html to see cdoc's handiwork"

bin/cdoc: src/cdoc $(src_html) $(src_css) $(src_js)
	mkdir -p bin
	rm -f $@
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
	rm -f bin/cdoc sample/cdoc.* sample/*.html
	rm -f cdoc-*.tar.gz
