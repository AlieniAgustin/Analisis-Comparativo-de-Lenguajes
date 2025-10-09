append(XS,[],XS).
append([],YS,YS).
append([X|XS],YS,[X|ZS]) :- append(XS,YS,ZS).
