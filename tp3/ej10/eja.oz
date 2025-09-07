fun {Foldr Operador Neutro L}
   case L
   of nil then Neutro
   [] x|xs then {Operador x {Foldr Operador Neutro xs}}
   end
end

