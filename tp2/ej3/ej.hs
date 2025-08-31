--ejemplo de programa que no compila por un error (intento sumar 
--un entero y una lista de enteros), pese a que nunca eso sucederia
--en tiempo de ejecucion (ya que nunca entraria por el else)
sum' :: [Int] -> Int
sum' [] = 0
sum' (x:xs) = if True then x + sum' xs else x + xs
