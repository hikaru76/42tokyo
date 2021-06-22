#!/bin/bash

# bsq と同じ階層で bash test.sh で実行
# 全て map error ならOK

OUTPUT=bsq

echo -n "01> "
echo """-6.ox
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "02> "
echo """6.ox
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "03> "
echo """6.ox
......
.....
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "04> "
echo """6.oxa
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "05> "
echo """6ooo
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "06> "
echo """6.oa
......
...x..
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "07> "
echo """......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "08> "
echo """6.ox
......
...	..
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "09> "
echo """6.ox
......
......
.o...o....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "10> "
echo -n """6.ox
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "11> "
echo """123.ox
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "12> "
echo """12345
......
......
.o...o
....o.
o.....
oo....""" > test
./${OUTPUT} test

echo -n "13> "
echo """6.ox""" > test
./${OUTPUT} test

echo -n "14> "
echo """


""" > test
./${OUTPUT} test

echo -n "15> "
echo """6.\tx
......
......
.\t...\t
....\t.
\t.....
\t\t....""" > test
./${OUTPUT} test

echo -n "16> "
echo """xxxxx
......
......
.\t...\t
....\t.
\t.....
\t\t....""" > test
./${OUTPUT} test

echo -n "17> "
echo """""" > test
./${OUTPUT} test

echo -n "18> "
echo """0.ox
""" > test
./${OUTPUT} test

echo -n "19> "
echo """4.ox
.....
.o.oo
o...o
o..o.
.....""" > test
./${OUTPUT} test