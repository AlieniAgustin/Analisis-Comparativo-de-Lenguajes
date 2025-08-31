type Nombre = String 

newtype DNI = DNI Int

{-
 - Haskell en cuanto a type, tiene equivalencia de tipos estructural, ya que 2 tipos 
 - son equivalentes cuando tienen la misma estructura. Esto lo podemos notar, ya que 
 - g toma como parametro un nombre, y sin embargo le pude pasar un String 
 -}

f :: String -> String 
f xs = g xs 

g :: Nombre -> Nombre 
g xs = xs

{-
 - Haskell en cuanto a newtype, tiene equivalencia de tipos por nombre, ya que 
 - 2 tipos son equivalentes cuando tienen el mismo nombre. Esto lo podemos notar,
 - ya que no puedo invocar g' con un Int 
 -}

f' :: Int -> Int 
f' x = g' x

g' :: DNI -> DNI 
g' (DNI n) = (DNI n)

{-
 - Entonces, Haskell maneja los dos enfoques de equivalencia de tipos, dependiendo 
 - la construccion que se use (type o newtype/data)
 -}
