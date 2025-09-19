pertenece(L,[L|_]).
pertenece(L,[_|LS]) :- pertenece(L,LS).
