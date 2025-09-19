my_length([],0).
my_length([_|L],M) :- my_length(L,N), M is N+1.
