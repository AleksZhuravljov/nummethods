unset surface
set contour
set view map
set size square
set key outside
set cntrparam bspline
set cntrparam points 5
set cntrparam order 10
#set cntrparam levels auto 10
#set cntrparam levels discrete 0.1, 0.3, 0.7
set cntrparam levels incremental 0.1, 0.2, 1.5

set xrange [-1:1]
set yrange [-1:1]

set samples 300
set isosamples 300

splot "sampledata.txt"  w l  title "contours"
#splot x*x+y*y  title "contours"

