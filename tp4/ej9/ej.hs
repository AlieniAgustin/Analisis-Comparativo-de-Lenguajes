paresPositivos :: [Int]
paresPositivos = [2*x | x<-[0..]]

primerosCincoNegativos :: [Int]
primerosCincoNegativos = take 5 paresPositivos
