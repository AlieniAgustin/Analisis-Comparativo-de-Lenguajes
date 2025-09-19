elimina_una(X,[],[]).
elimina_una(X,[X|YS],YS).
elimina_una(X,[Y|YS],[Y|ZS]) :- elimina_una(X,YS,ZS), X \= Y.

elimina_todas(X,[],[]).
elimina_todas(X,[X|YS],ZS) :- elimina_todas(X,YS,ZS).
elimina_todas(X,[Y|YS],[Y|ZS]) :- elimina_todas(X,YS,ZS), X \= Y.
