set term pdfcairo size 7.5,5
set output "examplePic.pdf"
#set term png size 750,500
#set output "examplePic.png"
set xrange [0:20]
set yrange [-1:1]
set xtics offset 0,-0.7
set ytics offset 0,0
set xlabel "Ось абсцисс" offset 0,-1
set ylabel "Ось ординат" offset -2,0
#set border 3
set xtics nomirror
set ytics nomirror
set ytics 0.2
# set xtics 0.5
# set grid
plot sin(x)# notitle

