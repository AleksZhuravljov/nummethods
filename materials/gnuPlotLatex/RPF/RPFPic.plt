set term tikz latex size 15,10 createstyle
set output "examplePic.tex"
#set term png size 750,500
#set output "examplePic.png"
ymax=1
y2max=3
set yrange [0:ymax]
set y2range [0:y2max]
set xtics offset 0,-0.7
set ytics offset 0,0
set xlabel "$S_{o}$" offset 0,-1
set ylabel "$f$" rotate by 0 offset -2,0
set y2label "$\\psi$" rotate by 0 offset 2,0
#set border 3
set key outside
set xtics nomirror
set ytics nomirror
set y2tics nomirror

no=2
nw=3
Ao=0.7
Aw=0.3
Sor=0.2
Swr=0.2
muo=5
muw=1

set xrange [Sor:1-Swr]
#set xtics 1-Sor-Swr

set xtics ("" 0 ,"$S_{or}$" Sor,"$1-S_{wr}$" 1-Swr,"$1$" 1)
set ytics ymax
set y2tics y2max

set key spacing 3

plot Ao*((x-Sor)/(1-Sor-Swr))**no w li lw 2 ti "$f_{o}$",\
Aw*((1-x-Swr)/(1-Sor-Swr))**nw w li lw 2 ti "$f_{w}$",\
30*Ao*((x-Sor)/(1-Sor-Swr))**no*(Aw/muw*((1-x-Swr)/(1-Sor-Swr))**nw)/(Ao/muo*((x-Sor)/(1-Sor-Swr))**no+Aw/muw*((1-x-Swr)/(1-Sor-Swr))**nw) axes x1y2 w li lw 2 ti "$\\psi$"
