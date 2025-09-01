local Max in
   local C in
      Max = proc {$ X Y ? Z}
	       local Cond in
		  Cond = (X >= Y)
		  if Cond then Z = X else Z = Y end
	       end
	    end
      local Temp1 in
	 local Temp2 in
	    Temp1 = 3
	    Temp2 = 5
	    {Max Temp1 Temp2 C}
	    {Browse C}
	 end
      end
   end
end
