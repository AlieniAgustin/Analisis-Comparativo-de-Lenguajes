sub_set(XS,[]).
sub_set([X|XS],[X|YS]) :- sub_set(XS,YS).
sub_set([X|XS],YS) :- sub_set(XS,YS).

