declare 
proc {Append A B ?C}
   case A of nil then C = B
   [] X|As then Cs in
      C = X | Cs
      {Append As B Cs}
   end
end
 

local C in
   {Append [1] C [1 2 3]}
   {Browse C}
end
