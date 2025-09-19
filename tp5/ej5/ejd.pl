pertenece(L,[L|_]).
pertenece(L,[_|LS]) :- pertenece(L,LS).

interseccion([],[],[]).
interseccion(XS,[],[]).
interseccion([],YS,[]).
interseccion([X|XS],YS,[X|ZS]) :- pertenece(X,YS), !, interseccion(XS,YS,ZS).
interseccion([X|XS],YS,ZS) :- interseccion(XS,YS,ZS).

