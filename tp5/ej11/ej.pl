pertenece1(X,[X|XS]) :- !.
pertenece1(X,[_|XS]) :- pertenece1(X,XS).

pertenece2(X,[X|XS]).
pertenece2(X,[_|XS]) :- pertenece2(X,XS).
