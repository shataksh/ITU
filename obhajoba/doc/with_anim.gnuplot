set terminal png size 700,500

set output 'with_anim.png'
#set size 1.0,0.5
#set border 3

#set multiplot layout 3,1 columnsfirst
set nokey

set title "Doba nez uzivatel po startu kliknul na prave dolni tlacitko [s animacemi]"
set xlabel "uzivatel"
set ylabel "sekundy"
set yrange [0:15]
#set size 0.5,0.5
#set origin 0,0
#plot "with_anim.dat" smooth unique
#plot "with_anim.dat"
plot "with_anim.dat" using 1:2 with boxes

#set title "Zavislost prumerneho casu zpracovani jedne objednavky na delce behu vyroby"
#set xlabel "minuty (krok 3 mesice)"
#set ylabel "minuty"
#plot "exp1b.dat" smooth bezier
#
#set title "Prumerna doba, kterou objednavka stravi v jednotlivych zarizenich"
##set boxwidth 0.5
#set xlabel "% z celkove doby"
#unset ylabel
#set style fill solid
#plot "exp1c.dat" using 1:3:xtic(2) with boxes
##data.dat:
##0 label       100
##1 label2      450
##2 "bar label" 75
#
#unset multiplot

# vim: set ft=gnuplot:
