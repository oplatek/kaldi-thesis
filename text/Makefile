NAME = main
# all: ${NAME}.pdf
all: ps

# Vyroba PDF primo z DVI by byla prijemnejsi, ale vetsina verzi dvipdfm nici obrazky
# ${NAME}.pdf: ${NAME}.dvi
#	dvipdfm -o $@ -p a4 -r 600 $<
pdf: ${NAME}.pdf
	evince $< >/dev/null 2>&1 &

ps: ${NAME}.ps
	evince $< >/dev/null 2>&1 &

${NAME}.pdf: ${NAME}.ps
	ps2pdf $< $@

${NAME}.ps: ${NAME}.dvi
	dvips -o $@ -D600 -t a4 $<

# LaTeX has to be run twice in order to count references
${NAME}.dvi: ${NAME}.tex $(wildcard *.tex) $(wildcard images/*.tex)
	latex -src $<
	latex -src $<

#  latex accepts only eps -> TODO convert images 
pictures: $(wildcard ${IMAGEDIR}/*.png ${IMAGEDIR}/*.jpg)
	convert $< `echo $<|sed 's:\(.*\)jpg:\1:'|sed 's:\(.*\)png:\1:'`eps

clean:
	rm -f *.log  *.dvi *.aux *.toc *.lof *.out *.idx *.ilg ${NAME}.ps ${NAME}.pdf
