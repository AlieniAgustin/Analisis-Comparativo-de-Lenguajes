declare
class Counter
   attr val
   meth init(V)
      val := V
   end
   meth inc(V)
      val := @val + V
   end
end

local C in
   C = {New Counter init(2)}
   {C inc (2)}
end
