pertenece(X,[X|XS]) :- !.
pertenece(X, [Y|YS]) :- pertenece(X,YS).

union(XS,[],XS).
union([],YS,YS).
union([X|XS], YS, ZS) :- pertenece(X,YS), union(XS,YS,ZS).
union([X|XS], YS, [X|ZS]) :- \+pertenece(X,YS), union(XS,YS,ZS).

diferencia([],YS,[]).
diferencia(XS,[],XS).
diferencia([X|XS], YS, ZS) :- pertenece(X,YS), diferencia(XS,YS,ZS).
diferencia([X|XS], YS, [X|ZS]) :- \+pertenece(X,YS), diferencia(XS,YS,ZS).
