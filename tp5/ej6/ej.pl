multiplicaLista([],F,[]).
multiplicaLista([X|XS],F,[Y|YS]) :- multiplicaLista(XS,F,YS), Y is X * F.
