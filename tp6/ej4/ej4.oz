declare
 fun {Reverse L}
    local Res in
       {NewCell nil Res}
       for x in L do
 	 Res := x | @Res
       end
       @Res
    end
 end

local L in
   L = [1 2 3]
   local Res in
      Res = {Reverse L}
      {Browse Res}
   end
end

