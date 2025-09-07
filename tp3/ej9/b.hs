map' :: a -> a
map' x = x

ejemplo :: [a] -> [a]
ejemplo [] = []
ejemplo (x:xs) = (ejemplo xs) ++ [map' x]

ejemplo' :: [a] -> [a] -> [a]
ejemplo' [] ys = ys
ejemplo' (x:xs) ys = ejemplo' xs (map' x:ys)

concat' :: [a] -> [a] -> [a]
concat' xs ys = xs ++ ys

inversa :: [a] -> [a]
inversa [] = []
inversa (x:xs) = concat' (inversa xs) [x]

inversa' :: [a] -> [a] -> [a]
inversa' [] ys = ys
inversa' (x:xs) ys = inversa' xs (x:ys)
