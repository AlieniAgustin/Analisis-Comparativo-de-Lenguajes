declare fun {NewCounter}
	   local C Inc Read in
	      C = {NewCell 0}

	      fun {Inc}
		 C := @C + 1
		 @C
	      end
	      fun {Read}
		 @C
	      end
	      counter(inc:Inc read:Read)
	   end
	end

local C1 in
   C1 = {NewCounter}
   {Browse {C1.read}}
   {C1.inc}
   {Browse {C1.read}}
end
