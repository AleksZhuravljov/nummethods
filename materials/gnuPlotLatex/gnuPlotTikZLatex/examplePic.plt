set term tikz size 15,10
set output "examplePic.tex"
#set term png size 750,500
#set output "examplePic.png"
PI=3.141592653589793238462643383
set xrange [0:2*PI]
set yrange [-1:1]
set xtics offset 0,-0.7
set ytics offset 0,0
set xlabel "Ось абсцисс" offset 0,-1
set ylabel "Ось ординат" offset -2,0
#set border 3
set xtics nomirror
set ytics nomirror
set ytics 0.2
set xtics ("" 0 ,"$\\frac{1}{2}\\pi$" PI/2,"$\\pi$" PI,"$\\frac{3}{2}\\pi$" 3*PI/2,"$2\\pi$" 2*PI) 
set grid
plot sin(x) ti "sin" #notitle
