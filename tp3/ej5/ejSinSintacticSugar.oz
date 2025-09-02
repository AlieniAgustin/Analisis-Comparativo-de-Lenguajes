local X in
   local Y in
      X = 1
      local Sum in
	 {Number. '+' 2 X Sum}
	 Y = Sum
	 local Cond in
	    {Value. '>' X Y Cond}
	    if Cond then
	       {Browse X}
	    else
	       {Browse Y}
	    end
	 end
      end
   end
end
