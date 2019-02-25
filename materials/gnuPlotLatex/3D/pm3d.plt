#set term png size 1000,1000
#set output "pm3d.png"
set key outside
set size square
set pm3d map
set cntrparam levels auto 7
#set cbrange [0.5:1.5]
set cbtics 0.4
set xrange [-1:1]
set yrange [-1:1]
#set palette gray
set palette rgbformulae 30,31,32
#set palette rgbformulae 30,31,32 negative

set samples 10
set isosamples 10

#splot x*x+y*y  notitle

splot "sampledata.txt" notitle