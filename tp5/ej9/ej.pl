pajaro(canario).
pajaro(gorrion).
vuela(canario).
vuela(gorrion).
mamifero(murcielago).
no_vuela(X) :- not(vuela(X)).
