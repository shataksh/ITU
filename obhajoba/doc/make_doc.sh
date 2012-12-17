#!/bin/sh

DOCNAME='doc'

gnuplot with_anim.gnuplot
gnuplot without_anim.gnuplot

# article | report | book | memoir | letter | slides (transparent folie)
pandoc -S -s -N --section-divs --no-tex-ligatures \
  --variable lang=czech \
  --variable date="$(date "+%d.%m.%Y")" \
  --variable geometry=margin=2.5cm \
  --variable geometry=a4paper \
  --variable fontsize=12pt \
  --variable documentclass=article \
  -o "$DOCNAME.pdf" "$DOCNAME.markdown"
#report article
#  --template=template.latex
