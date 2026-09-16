
checkpoint 1
What is preserved when a non-zero vector is normalized?
: direction
What is discarded?
: magnitude
Which input must be guarded before division?
: zero vector, so we do not divide by zero magnitude

checkpoint 2
1. (1,1)⋅(2,2) : positive
2. (1,1)⋅(1,−1) : 0
3. (1,1)⋅(−2,−2) : negative

checkpoint 3
If code returns (0,0,−1) for a×b above,
which likely error should you inspect first?

check if you're doing axb or bxa because bxa = -(axb)

check if right hand or left hand orientation
e.g. directx is left handed

checkpoint 4
Predict R(2,1) and sketch the point before calculating it.

R is a 90 deg rotation so
probably (-1, 2)

checkpoint 5
Which matrix product represents “rotate, then scale”
for column vectors? Explain without memorizing a slogan.

SR => because you evaluate stuff from inside to outside i.e. AB(x) means you do B then do A 

Self-Check

1. What information does normalization preserve and discard?
normalisation preservrs direction, discards magnitude

2. Why is a zero dot product evidence of perpendicularity for non-zero vectors?
a dot product is ||u|| ||v|| cos(theta), cos(90) equals 0

3. Which checks distinguish a correct cross product from a merely perpendicular vector?
check the magnitude which shuould be ||u|| ||v|| sin(theta)

Calculate S(1,1) and R(1,1) for the supplied matrices.
S(1,1) = (2,1), R(1,1) = (-1,1)

Calculate RS(1,1) and  SR(1,1). Why are they different?
RS(1,1) = (-1,2), SR(1,1) = (-2,1)

SR => because you evaluate stuff from inside to outside i.e. AB(x) means you do B then do A 

Why is checking only a visualization weaker than also checking a known coordinate?
the visualisation may hide errors even if it looks correct

Answer aloud without notes after a break. If an answer is uncertain, return to the matching part, redo its smallest example, and try again.
