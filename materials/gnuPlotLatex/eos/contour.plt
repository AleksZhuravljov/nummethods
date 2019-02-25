set term pdfcairo size 7.5,7.5
set output "contour.pdf"
unset surface
set contour
set view map
set size square
set key outside
set cntrparam bspline
set cntrparam points 5
set cntrparam order 10
set cntrlabel format '%8.3g' font ',10' start 25 interval -1
set cntrparam levels discrete 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.92, 0.94, 0.96, 0.98, 0.99, 0.995, 0.999, 1.

set xtics 10
set ytics 1e+6
set grid
set xlabel "T, K"
set ylabel "P, Pa"
set samples 50
set isosamples 50

set key spacing 3

set style textbox opaque margins  0.5,  0.5 noborder

splot "plotData.txt"  w l title "{/Symbol b}", "plotData.txt"  with labels boxed notitle

